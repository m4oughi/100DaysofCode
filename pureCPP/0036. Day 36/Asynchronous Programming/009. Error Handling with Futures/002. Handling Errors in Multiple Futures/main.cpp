#include <iostream>
#include <future>
#include <stdexcept>
#include <thread>

int safeDivide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero error");
    }
    return a / b;
}

int main() {
    // Launch multiple asynchronous tasks
    std::future<int> result1 = std::async(std::launch::async, safeDivide, 10, 2);
    std::future<int> result2 = std::async(std::launch::async, safeDivide, 10, 0);  // Will throw error

    try {
        // Get the results
        std::cout << "Result1: " << result1.get() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error in result1: " << e.what() << std::endl;
    }

    try {
        // Attempt to get the result from the second future
        std::cout << "Result2: " << result2.get() << std::endl;  // This will throw an exception
    } catch (const std::exception& e) {
        std::cout << "Error in result2: " << e.what() << std::endl;  // Output: Division by zero error
    }

    return 0;
}
