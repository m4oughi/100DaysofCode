#include <iostream>

class Example {
public:
    int value = 100;

    void modifyValue() {
        auto lambda = [*this]() mutable {
            value += 10; // Modifying the copied value
            std::cout << "Inside Lambda: " << value << '\n';
        };
        lambda();
        std::cout << "Outside Lambda: " << value << '\n';
    }
};

int main() {
    Example ex;
    ex.modifyValue();
    return 0;
}
