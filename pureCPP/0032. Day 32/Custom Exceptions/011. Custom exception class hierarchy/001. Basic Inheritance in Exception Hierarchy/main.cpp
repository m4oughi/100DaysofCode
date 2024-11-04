#include <iostream>
#include <exception>

class BaseException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Base Exception occurred!";
    }
};

class DerivedException : public BaseException {
public:
    const char* what() const noexcept override {
        return "Derived Exception occurred!";
    }
};

int main() {
    try {
        throw DerivedException();
    } catch (const BaseException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
