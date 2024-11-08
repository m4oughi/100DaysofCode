#include <iostream>
#include <thread>
#include <vector>
#include <chrono>

void cyclicTask(int taskNum) {
    std::cout << "Processing task " << taskNum << " on thread " << std::this_thread::get_id() << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(150));
}

int main() {
    int numTasks = 10;
    int numThreads = 3;
    std::vector<std::thread> threadPool;

    for (int i = 0; i < numTasks; i += numThreads) {
        for (int j = 0; j < numThreads && i + j < numTasks; ++j) {
            threadPool.emplace_back(cyclicTask, i + j + 1);
        }

        for (auto& t : threadPool) {
            t.join();
        }

        threadPool.clear();  // Clear pool to reuse
    }

    return 0;
}
