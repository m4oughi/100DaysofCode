#include <iostream>
#include <stdexcept>

void calculate(int num) {
    if (num == 0) {
        throw std::runtime_error("Division by zero is not allowed");
    }
    std::cout << "Result: " << (100 / num) << std::endl;
}

int main() {
    try {
        calculate(0);
    } catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
