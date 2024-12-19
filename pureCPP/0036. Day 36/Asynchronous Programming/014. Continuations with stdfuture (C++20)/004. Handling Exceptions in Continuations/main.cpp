#include <iostream>
#include <future>
#include <thread>

int task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    throw std::runtime_error("Error in task1");
    return 42;
}

void task2(int result) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task 2 result: " << result << std::endl;
}

int main() {
    std::future<int> fut = std::async(std::launch::async, task1);

    fut.then([](std::future<int> f) {
        try {
            int result = f.get();
            std::cout << "Task 1 result: " << result << std::endl;
            return result;
        } catch (const std::exception& e) {
            std::cout << "Caught exception in task 1: " << e.what() << std::endl;
            throw;  // Propagate the exception to the next continuation
        }
    }).then([](std::future<int> f) {
        try {
            int result = f.get();
            task2(result);
        } catch (const std::exception& e) {
            std::cout << "Caught exception in task 2: " << e.what() << std::endl;
        }
    });

    std::this_thread::sleep_for(std::chrono::seconds(3));  // Wait for completion
    return 0;
}
