#include <iostream>
#include <future>
#include <stdexcept>
#include <thread>

std::future<int> divide(int a, int b) {
    return std::async(std::launch::async, [a, b]() {
        if (b == 0) {
            throw std::runtime_error("Nested division by zero error");
        }
        return a / b;
    });
}

int main() {
    try {
        // Launch a nested future
        std::future<int> result = divide(10, 0);  // Will throw exception

        // Attempt to get the result from the nested future
        std::cout << "Result: " << result.get() << std::endl;
    } catch (const std::exception& e) {
        // Handle exception from the nested future
        std::cout << "Caught exception: " << e.what() << std::endl;  // Output: Nested division by zero error
    }

    return 0;
}
