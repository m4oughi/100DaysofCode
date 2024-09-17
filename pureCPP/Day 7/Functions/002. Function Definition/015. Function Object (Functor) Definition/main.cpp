#include <iostream>

// Functor (Function Object)
class Multiply {
public:
    int operator()(int a, int b) {
        return a * b;
    }
};

int main() {
    Multiply mul;  // Functor object
    std::cout << mul(3, 4) << std::endl;  // Calling functor as function
    return 0;
}
