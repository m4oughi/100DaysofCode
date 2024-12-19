#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int compute() {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work
    throw std::runtime_error("Computation failed");
    return 42;  // Never reached due to exception
}

int main() {
    // Launch asynchronous task
    std::future<int> result = std::async(std::launch::async, compute);

    // Check future status without blocking indefinitely
    if (result.wait_for(std::chrono::seconds(1)) == std::future_status::ready) {
        try {
            std::cout << "Result: " << result.get() << std::endl;  // This will throw an exception
        } catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << std::endl;  // Output: Computation failed
        }
    } else {
        std::cout << "Task is still running" << std::endl;
    }

    return 0;
}
