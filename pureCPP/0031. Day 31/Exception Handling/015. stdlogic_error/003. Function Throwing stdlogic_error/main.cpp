#include <iostream>
#include <stdexcept>

void divide(int a, int b) {
    if (b == 0) {
        throw std::logic_error("Division by zero");
    }
    std::cout << "Result: " << a / b << std::endl;
}

int main() {
    try {
        divide(10, 0);
    } catch (const std::logic_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
