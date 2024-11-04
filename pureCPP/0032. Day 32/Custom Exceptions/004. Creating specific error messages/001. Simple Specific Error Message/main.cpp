#include <iostream>
#include <exception>

class DivideByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero!";
    }
};

int main() {
    try {
        throw DivideByZeroException();
    } catch (const DivideByZeroException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
