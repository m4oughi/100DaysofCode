#include <iostream>
#include <exception>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "CustomException occurred!";
    }
};

int main() {
    try {
        throw CustomException();  // Throwing custom exception
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;  // Catches CustomException as well
    }
    return 0;
}
