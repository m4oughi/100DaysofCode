#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

std::mutex mtx;

void safeIncrement(int* counter) {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);  // Protect access to counter
        (*counter)++;
    }
}

int main() {
    int counter = 0;
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.push_back(std::thread(safeIncrement, &counter));  // Pass the same pointer to multiple threads
    }

    for (auto& t : threads) {
        t.join();  // Wait for all threads to finish
    }

    std::cout << "Final counter value: " << counter << std::endl;  // Correct output: 10000
    return 0;
}
