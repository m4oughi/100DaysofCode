#include <iostream>
#include <thread>
#include <vector>

void increment(int* counter) {
    for (int i = 0; i < 1000; ++i) {
        (*counter)++;
    }
}

int main() {
    int counter = 0;
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.push_back(std::thread(increment, &counter));  // Passing the same pointer to multiple threads
    }

    for (auto& t : threads) {
        t.join();  // Wait for all threads to finish
    }

    std::cout << "Final counter value: " << counter << std::endl;  // Output might not be as expected due to race conditions
    return 0;
}
