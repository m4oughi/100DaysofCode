#include <iostream>
#include <exception>
#include <string>

class OutOfRangeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Value out of range!";
    }
};

class InvalidInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid input provided!";
    }
};

int main() {
    try {
        int value = 110;

        if (value > 100) {
            throw OutOfRangeException();
        } else if (value < 0) {
            throw InvalidInputException();
        }
    } catch (const OutOfRangeException& e) {
        std::cout << "Out of Range Exception: " << e.what() << std::endl;
    } catch (const InvalidInputException& e) {
        std::cout << "Invalid Input Exception: " << e.what() << std::endl;
    }

    return 0;
}
