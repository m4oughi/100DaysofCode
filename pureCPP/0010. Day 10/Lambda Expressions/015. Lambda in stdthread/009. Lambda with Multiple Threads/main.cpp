#include <iostream>
#include <thread>
#include <vector>

int main() {
    std::vector<std::thread> threads;

    for (int i = 0; i < 5; ++i) {
        threads.emplace_back([i]() {
            std::cout << "Thread " << i << " is running!" << std::endl;
        });
    }

    for (auto& t : threads) {
        t.join(); // Wait for all threads to finish
    }

    return 0;
}
