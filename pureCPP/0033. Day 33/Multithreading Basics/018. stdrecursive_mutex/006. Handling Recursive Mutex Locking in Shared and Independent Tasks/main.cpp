#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::recursive_mutex r_mtx;

void performTask(int id, int depth) {
    if (depth == 0) return;

    r_mtx.lock();
    std::cout << "Thread " << id << " working at depth " << depth << std::endl;

    // Perform a recursive call to simulate complex operations
    performTask(id, depth - 1);

    std::cout << "Thread " << id << " finished task at depth " << depth << std::endl;
    r_mtx.unlock();
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 1; i <= 3; ++i) {
        threads.emplace_back(performTask, i, 3);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
