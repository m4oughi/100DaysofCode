#include <iostream>
#include <future>
#include <thread>

void task1() {
    throw std::runtime_error("Task 1 failed");
}

void task2() {
    throw std::runtime_error("Task 2 failed");
}

int main() {
    std::future<void> fut1 = std::async(std::launch::async, task1);
    std::future<void> fut2 = std::async(std::launch::async, task2);

    try {
        fut1.get();  // This will throw an exception from task1
    } catch (const std::exception& e) {
        std::cout << "Caught exception from task1: " << e.what() << std::endl;
    }

    try {
        fut2.get();  // This will throw an exception from task2
    } catch (const std::exception& e) {
        std::cout << "Caught exception from task2: " << e.what() << std::endl;
    }

    return 0;
}
