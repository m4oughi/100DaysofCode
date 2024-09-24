#include <iostream>

class Example {
public:
    int value = 42;

    void printValue() {
        // Lambda capturing 'this' pointer to access member variables
        auto captureThis = [this]() {
            std::cout << "Captured this pointer: value = " << value << std::endl;
        };
        captureThis();
    }
};

int main() {
    Example example;
    example.printValue(); // Outputs value = 42
    return 0;
}
