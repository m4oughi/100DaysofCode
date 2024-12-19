#include <iostream>
#include <future>
#include <stdexcept>

int riskyFunction(int x) {
    if (x < 0) throw std::runtime_error("Negative value not allowed!");
    return x * x;
}

int main() {
    std::future<int> result = std::async(riskyFunction, -5);
    try {
        std::cout << "Result: " << result.get() << std::endl;  // Exception propagates here
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
