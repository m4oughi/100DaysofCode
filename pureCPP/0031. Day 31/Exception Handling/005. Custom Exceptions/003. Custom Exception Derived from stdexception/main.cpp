#include <iostream>
#include <exception>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception derived from std::exception";
    }
};

int main() {
    try {
        throw CustomException();  // Throwing custom exception derived from std::exception
    } catch (const CustomException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
