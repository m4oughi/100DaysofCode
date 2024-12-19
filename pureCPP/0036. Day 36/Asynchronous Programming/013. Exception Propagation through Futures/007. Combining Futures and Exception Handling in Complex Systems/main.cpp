#include <iostream>
#include <future>
#include <thread>
#include <vector>

int task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    return 10;
}

int task2() {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    throw std::runtime_error("Task 2 failed");
    return 20;
}

int main() {
    std::vector<std::future<int>> futures;
    futures.push_back(std::async(std::launch::async, task1));
    futures.push_back(std::async(std::launch::async, task2));

    // Handle exceptions from both tasks
    for (auto& fut : futures) {
        try {
            int result = fut.get();  // Wait and handle the result or exception
            std::cout << "Task result: " << result << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Caught exception: " << e.what() << std::endl;  // Output: Task 2 failed
        }
    }

    return 0;
}
