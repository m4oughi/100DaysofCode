#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex rmtx;

void recursiveFunction(int count) {
    if (count <= 0) return;
    rmtx.lock(); // Acquire lock multiple times
    std::cout << "Lock acquired at depth: " << count << "\n";
    recursiveFunction(count - 1); // Recursive call
    rmtx.unlock(); // Release lock as the recursive calls unwind
}

int main() {
    std::thread t1(recursiveFunction, 3);
    t1.join();
    return 0;
}
