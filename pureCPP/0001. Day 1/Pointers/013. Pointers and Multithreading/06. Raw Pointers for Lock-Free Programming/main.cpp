#include <iostream>
#include <thread>
#include <atomic>
#include <vector>

void atomicIncrement(std::atomic<int>* counter) {
    for (int i = 0; i < 1000; ++i) {
        (*counter)++;  // Atomic increment operation
    }
}

int main() {
    std::atomic<int> counter(0);
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.push_back(std::thread(atomicIncrement, &counter));  // Pass pointer to atomic counter
    }

    for (auto& t : threads) {
        t.join();  // Wait for all threads to finish
    }

    std::cout << "Final counter value: " << counter << std::endl;  // Correct output: 10000
    return 0;
}
