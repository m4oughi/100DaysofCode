#include <iostream>

class Example {
public:
    int value = 42;

    void printValue() {
        auto lambda = [*this]() {
            std::cout << "Value: " << value << '\n';
        };
        lambda();
    }
};

int main() {
    Example ex;
    ex.printValue();
    return 0;
}
