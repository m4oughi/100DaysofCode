#include <iostream>
#include <string>

class ComplexObject {
public:
    ComplexObject(const std::string& name) {
        std::cout << "Lvalue constructor: " << name << std::endl;
    }

    ComplexObject(std::string&& name) {
        std::cout << "Rvalue constructor: " << name << std::endl;
    }

    template <typename T>
    void processObject(T&& name) {
        // Forwarding to constructors based on lvalue/rvalue
        ComplexObject obj(std::forward<T>(name));
    }
};

int main() {
    ComplexObject co("Temporary");  // Rvalue constructor

    std::string name = "Persistent";
    co.processObject(name);         // Lvalue constructor
    co.processObject("Temporary");  // Rvalue constructor
}
