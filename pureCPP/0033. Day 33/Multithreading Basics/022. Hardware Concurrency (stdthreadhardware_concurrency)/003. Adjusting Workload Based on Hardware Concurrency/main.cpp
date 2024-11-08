#include <iostream>
#include <thread>
#include <vector>

void processTask(int start, int end) {
    std::cout << "Processing from " << start << " to " << end << " on thread " << std::this_thread::get_id() << std::endl;
}

int main() {
    unsigned int numThreads = std::thread::hardware_concurrency();
    int totalTasks = 100;
    int tasksPerThread = totalTasks / numThreads;

    std::vector<std::thread> threads;
    for (unsigned int i = 0; i < numThreads; ++i) {
        int start = i * tasksPerThread;
        int end = (i == numThreads - 1) ? totalTasks : start + tasksPerThread;
        threads.emplace_back(processTask, start, end);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
