#include <iostream>
#include <exception>

class OutOfRangeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Out of range exception occurred!";
    }
};

void checkNumber(int number) {
    if (number < 0 || number > 100) throw OutOfRangeException();
}

int main() {
    try {
        checkNumber(150);  // Invalid number
    } catch (const OutOfRangeException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
