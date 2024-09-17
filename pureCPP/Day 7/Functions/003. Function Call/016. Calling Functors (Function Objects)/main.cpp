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
    std::cout << mul(3, 4) << std::endl;  // Call to functor like a function
    return 0;
}
