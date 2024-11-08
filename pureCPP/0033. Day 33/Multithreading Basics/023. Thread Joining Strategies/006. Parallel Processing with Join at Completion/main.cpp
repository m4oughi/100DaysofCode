#include <iostream>
#include <thread>
#include <vector>
#include <numeric>
#include <chrono>

void sumTask(int start, int end, int& result) {
    result = std::accumulate(start, end, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

int main() {
    std::vector<int> results(5);
    std::vector<std::thread> threads;

    for (int i = 0; i < 5; ++i) {
        threads.emplace_back(sumTask, i * 100, (i + 1) * 100, std::ref(results[i]));
    }

    // Defer join until all threads are complete
    for (auto& t : threads) {
        t.join();
    }

    int totalSum = std::accumulate(results.begin(), results.end(), 0);
    std::cout << "Total sum: " << totalSum << std::endl;

    return 0;
}
