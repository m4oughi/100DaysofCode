#include <iostream>
#include <functional>

// Function object (functor)
struct Multiply {
    int operator()(int a, int b) const { return a * b; }
};

int main() {
    std::function<int(int, int)> func = Multiply(); // Use function object
    std::cout << "Product: " << func(4, 5) << std::endl;
    return 0;
}
