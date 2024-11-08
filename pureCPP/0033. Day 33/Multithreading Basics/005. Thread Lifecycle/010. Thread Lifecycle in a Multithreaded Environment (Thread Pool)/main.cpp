#include <iostream>
#include <thread>
#include <vector>

void task(int id) {
    std::cout << "Thread " << id << " is working!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Thread " << id << " finished!" << std::endl;
}

int main() {
    const int threadCount = 4;
    std::vector<std::thread> threads;

    for (int i = 0; i < threadCount; ++i) {
        threads.emplace_back(task, i + 1); // Create threads
    }

    for (auto& t : threads) {
        if (t.joinable()) {
            t.join(); // Ensure all threads complete
        }
    }

    std::cout << "All threads completed!" << std::endl;
    return 0;
}
