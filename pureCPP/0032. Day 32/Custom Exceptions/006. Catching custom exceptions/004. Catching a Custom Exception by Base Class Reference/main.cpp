#include <iostream>
#include <exception>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred!";
    }
};

int main() {
    try {
        throw CustomException();
    } catch (const std::exception& e) {  // Catching by base class reference
        std::cout << "Caught base class exception: " << e.what() << std::endl;
    }
    return 0;
}
