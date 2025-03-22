#include <iostream>
#include <functional>

class Example {
public:
    int value = 20;

    std::function<void()> getLambda() {
        return [*this]() {
            std::cout << "Lambda Value: " << value << '\n';
        };
    }
};

int main() {
    Example ex;
    auto lambda = ex.getLambda();
    ex.value = 40; // Modifying the original object
    lambda(); // Will print the copied value
    return 0;
}
