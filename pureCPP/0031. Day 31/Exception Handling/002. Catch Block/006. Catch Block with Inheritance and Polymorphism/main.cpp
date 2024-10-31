#include <iostream>

class BaseException {
public:
    virtual const char* what() const {
        return "Base exception";
    }
};

class DerivedException : public BaseException {
public:
    const char* what() const override {
        return "Derived exception";
    }
};

int main() {
    try {
        throw DerivedException();  // Throwing derived class exception
    } catch (const BaseException& e) {  // Catching using base class reference
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
