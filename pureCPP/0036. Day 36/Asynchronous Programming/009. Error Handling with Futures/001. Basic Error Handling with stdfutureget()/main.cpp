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
    // Launch asynchronous task
    std::future<int> result = std::async(std::launch::async, safeDivide, 10, 0);

    try {
        // Attempt to get the result, but this will throw an exception
        std::cout << "Result: " << result.get() << std::endl;
    } catch (const std::exception& e) {
        // Catch and handle the exception
        std::cout << "Error: " << e.what() << std::endl;  // Output: Division by zero error
    }

    return 0;
}
