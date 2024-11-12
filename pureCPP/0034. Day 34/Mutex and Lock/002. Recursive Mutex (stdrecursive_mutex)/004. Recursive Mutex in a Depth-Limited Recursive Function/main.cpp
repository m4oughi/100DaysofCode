#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex rmtx;

void depthLimitedSearch(int depth, int limit) {
    if (depth > limit) return;

    rmtx.lock();
    std::cout << "Depth " << depth << ": Exploring options\n";
    depthLimitedSearch(depth + 1, limit); // Recursive call for deeper search
    std::cout << "Depth " << depth << ": Backtracking\n";
    rmtx.unlock();
}

int main() {
    std::thread t1(depthLimitedSearch, 1, 3);
    std::thread t2(depthLimitedSearch, 1, 3);

    t1.join();
    t2.join();
    return 0;
}
