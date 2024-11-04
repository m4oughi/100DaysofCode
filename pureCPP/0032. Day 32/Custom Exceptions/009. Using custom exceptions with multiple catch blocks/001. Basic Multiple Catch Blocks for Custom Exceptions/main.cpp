#include <iostream>
#include <exception>

class DivisionByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Division by zero error!";
    }
};

class NegativeNumberException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Negative number error!";
    }
};

int main() {
    try {
        int numerator = -5;
        int denominator = 0;

        if (denominator == 0) {
            throw DivisionByZeroException();
        } else if (numerator < 0) {
            throw NegativeNumberException();
        }
    } catch (const DivisionByZeroException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    } catch (const NegativeNumberException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
