#include <iostream>
#include <stdexcept>

void divide(int a, int b) {
    try {
        if (b == 0) {
            throw std::runtime_error("Division by zero error!");
        }
        std::cout << "Result: " << a / b << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

int main() {
    divide(10, 0);  // Triggers exception, but program remains valid
    return 0;
}
