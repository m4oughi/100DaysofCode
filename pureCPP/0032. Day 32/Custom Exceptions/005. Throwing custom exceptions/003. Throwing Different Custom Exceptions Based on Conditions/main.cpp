#include <iostream>
#include <exception>
#include <string>

class NegativeNumberException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Negative number provided!";
    }
};

class DivideByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero!";
    }
};

double divide(double a, double b) {
    if (b == 0)
        throw DivideByZeroException();
    if (a < 0 || b < 0)
        throw NegativeNumberException();
    return a / b;
}

int main() {
    try {
        std::cout << divide(10, 0) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
