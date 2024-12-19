#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int slowTask() {
    std::this_thread::sleep_for(std::chrono::seconds(3));  // Simulate long task
    return 42;
}

int fastTask() {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate quick task
    return 99;
}

int main() {
    // Launch asynchronous tasks
    std::future<int> slow = std::async(std::launch::async, slowTask);
    std::future<int> fast = std::async(std::launch::async, fastTask);

    // Using wait_for to implement a timeout for the slow task
    if (slow.wait_for(std::chrono::seconds(2)) == std::future_status::timeout) {
        std::cout << "Slow task timed out!" << std::endl;
    } else {
        std::cout << "Slow task result: " << slow.get() << std::endl;
    }

    // Get result from the fast task
    std::cout << "Fast task result: " << fast.get() << std::endl;

    return 0;
}
