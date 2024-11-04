#include <iostream>
#include <exception>

class InvalidInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid input exception occurred!";
    }
};

class DivideByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Divide by zero exception occurred!";
    }
};

int main() {
    try {
        int a = 10, b = 0;
        if (b == 0) throw DivideByZeroException();
        else if (a < 0) throw InvalidInputException();
    } catch (const DivideByZeroException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    } catch (const InvalidInputException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
