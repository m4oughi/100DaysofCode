#include <iostream>
#include <future>
#include <thread>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

int main() {
    // Launch asynchronous task with division
    std::future<int> result = std::async(std::launch::async, divide, 10, 0);

    try {
        // Wait and get the result from the future
        std::cout << "Result: " << result.get() << std::endl;  // Will throw exception
    } catch (const std::exception& e) {
        // Handle exception thrown from future task
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
