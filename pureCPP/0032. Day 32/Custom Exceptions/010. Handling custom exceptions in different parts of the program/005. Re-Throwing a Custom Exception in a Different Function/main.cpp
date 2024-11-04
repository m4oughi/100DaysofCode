#include <iostream>
#include <exception>

class ReThrowException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Exception re-thrown!";
    }
};

void rethrowFunction() {
    try {
        throw ReThrowException();
    } catch (const ReThrowException& e) {
        std::cout << "Caught in rethrowFunction: " << e.what() << std::endl;
        throw;  // Re-throw the exception
    }
}

int main() {
    try {
        rethrowFunction();
    } catch (const ReThrowException& e) {
        std::cout << "Caught in main after re-throw: " << e.what() << std::endl;
    }
    return 0;
}
