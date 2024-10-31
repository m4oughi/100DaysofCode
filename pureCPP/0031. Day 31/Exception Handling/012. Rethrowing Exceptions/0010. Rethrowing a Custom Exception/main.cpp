#include <iostream>
#include <stdexcept>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "CustomException occurred!";
    }
};

void process() {
    try {
        throw CustomException();
    } catch (const CustomException& e) {
        std::cout << "Caught in process: " << e.what() << std::endl;
        throw;  // Rethrow custom exception
    }
}

int main() {
    try {
        process();
    } catch (const CustomException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
