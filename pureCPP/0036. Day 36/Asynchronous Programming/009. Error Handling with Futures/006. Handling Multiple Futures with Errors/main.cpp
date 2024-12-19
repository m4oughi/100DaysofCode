#include <iostream>
#include <future>
#include <thread>
#include <stdexcept>

int task1() {
    throw std::runtime_error("Error in task1");
    return 10;
}

int task2() {
    return 20;
}

int task3() {
    throw std::runtime_error("Error in task3");
    return 30;
}

int main() {
    // Launch multiple asynchronous tasks
    std::future<int> result1 = std::async(std::launch::async, task1);
    std::future<int> result2 = std::async(std::launch::async, task2);
    std::future<int> result3 = std::async(std::launch::async, task3);

    // Handle errors for each future
    try {
        std::cout << "Result1: " << result1.get() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in task1: " << e.what() << std::endl;
    }

    try {
        std::cout << "Result2: " << result2.get() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in task2: " << e.what() << std::endl;
    }

    try {
        std::cout << "Result3: " << result3.get() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in task3: " << e.what() << std::endl;
    }

    return 0;
}
