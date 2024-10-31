#include <iostream>

class Base {
public:
    virtual void process() noexcept(false) {
        std::cout << "Base class method, may throw." << std::endl;
        throw std::runtime_error("Exception in Base::process.");
    }
};

class Derived : public Base {
public:
    void process() noexcept override {
        std::cout << "Derived class method, guaranteed no exception." << std::endl;
    }
};

int main() {
    Base* obj = new Derived();

    try {
        obj->process();  // Calls the Derived::process which is noexcept
    } catch (...) {
        std::cout << "Exception caught!" << std::endl;
    }

    delete obj;
    return 0;
}
