#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::recursive_timed_mutex rtmtx;

void recursiveFunction(int depth) {
    if (depth <= 0) return;

    if (rtmtx.try_lock_for(std::chrono::milliseconds(100))) { // Lock for 100 ms
        std::cout << "Lock acquired at depth: " << depth << "\n";
        recursiveFunction(depth - 1); // Recursive call
        rtmtx.unlock(); // Unlock as recursion unwinds
    } else {
        std::cout << "Failed to acquire lock at depth: " << depth << "\n";
    }
}

int main() {
    std::thread t1(recursiveFunction, 3);
    t1.join();
    return 0;
}
