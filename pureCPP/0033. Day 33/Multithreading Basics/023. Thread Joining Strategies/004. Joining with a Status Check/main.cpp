#include <iostream>
#include <thread>
#include <vector>
#include <chrono>

void statusCheckTask(int id) {
    std::cout << "Thread " << id << " doing work." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::cout << "Thread " << id << " completed." << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 1; i <= 3; ++i) {
        threads.emplace_back(statusCheckTask, i);
    }

    // Join each thread and print its join status
    for (auto& t : threads) {
        if (t.joinable()) {
            std::cout << "Joining thread." << std::endl;
            t.join();
        }
    }

    return 0;
}
