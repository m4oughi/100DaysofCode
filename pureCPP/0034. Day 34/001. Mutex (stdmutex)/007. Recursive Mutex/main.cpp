#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex rmtx;

void recursiveFunction(int depth) {
    if (depth <= 0) return;
    rmtx.lock();
    std::cout << "Lock acquired at depth " << depth << "\n";
    recursiveFunction(depth - 1); // Recursive call
    rmtx.unlock();
}

int main() {
    std::thread t1(recursiveFunction, 3);
    std::thread t2(recursiveFunction, 3);

    t1.join();
    t2.join();
    return 0;
}
