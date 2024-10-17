#include <iostream>

class LargeObject {
public:
    LargeObject() { std::cout << "Default constructor" << std::endl; }

    LargeObject(const LargeObject &) {
        std::cout << "Copy constructor" << std::endl;
    }

    LargeObject(LargeObject &&) noexcept {
        std::cout << "Move constructor" << std::endl;
    }
};

void process(LargeObject obj) {
    // Do something
}

int main() {
    LargeObject obj;
    process(std::move(obj));  // Avoids copying, calls move constructor
}
