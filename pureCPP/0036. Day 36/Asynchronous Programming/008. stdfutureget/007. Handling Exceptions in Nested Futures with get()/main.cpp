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

std::future<int> asyncDivide(int a, int b) {
    return std::async(std::launch::async, divide, a, b);
}

int main() {
    try {
        // Launch an asynchronous task that returns another future
        std::future<int> result = asyncDivide(10, 0);  // This will throw an exception

        // Get the result, which will throw an exception due to division by zero
        std::cout << "Division result: " << result.get() << std::endl;
    } catch (const std::exception& e) {
        // Handle exception thrown in nested future
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
