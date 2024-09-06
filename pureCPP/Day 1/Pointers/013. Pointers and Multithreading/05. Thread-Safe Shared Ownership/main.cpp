#include <iostream>
#include <thread>
#include <vector>
#include <memory>
#include <mutex>

std::mutex mtx;

void processData(std::shared_ptr<int> sharedCounter) {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        (*sharedCounter)++;
    }
}

int main() {
    auto sharedCounter = std::make_shared<int>(0);  // Shared pointer to an integer
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.push_back(std::thread(processData, sharedCounter));  // Pass shared_ptr to threads
    }

    for (auto& t : threads) {
        t.join();  // Wait for all threads to finish
    }

    std::cout << "Final counter value: " << *sharedCounter << std::endl;  // Correct output: 10000
    return 0;
}
