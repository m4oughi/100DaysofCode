#include <iostream>
#include <thread>
#include <vector>

void processChunk(const std::vector<int>& data, int start, int end, int id) {
    int sum = 0;
    for (int i = start; i < end; ++i) {
        sum += data[i];
    }
    std::cout << "Thread " << id << " sum: " << sum << std::endl;
}

int main() {
    unsigned int numThreads = std::thread::hardware_concurrency();
    std::vector<int> data(1000, 1); // Array of 1000 elements, all set to 1
    int chunkSize = data.size() / numThreads;

    std::vector<std::thread> threads;
    for (unsigned int i = 0; i < numThreads; ++i) {
        int start = i * chunkSize;
        int end = (i == numThreads - 1) ? data.size() : start + chunkSize;
        threads.emplace_back(processChunk, std::cref(data), start, end, i + 1);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
