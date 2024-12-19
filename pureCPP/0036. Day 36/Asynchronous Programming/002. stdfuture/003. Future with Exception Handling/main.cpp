#include <iostream>
#include <future>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) throw std::runtime_error("Division by zero!");
    return a / b;
}

int main() {
    std::future<int> result = std::async(divide, 10, 0);
    try {
        std::cout << "Result: " << result.get() << std::endl;  // Exception will propagate here
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
