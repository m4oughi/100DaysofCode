#include <iostream>
#include <stdexcept>

class Base {
public:
    virtual void process() {
        throw std::runtime_error("Error in Base");
    }
};

class Derived : public Base {
public:
    void process() override {
        try {
            Base::process();
        } catch (const std::runtime_error& e) {
            std::cout << "Caught in Derived: " << e.what() << std::endl;
            throw;  // Rethrow for higher-level handling
        }
    }
};

int main() {
    Derived obj;
    try {
        obj.process();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
