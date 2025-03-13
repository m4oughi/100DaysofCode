#include <iostream>

int main() {
    auto multiply = [](auto a, auto b) { return a * b; };

    std::cout << "Multiply (int * double): " << multiply(3, 4.5) << std::endl;

    return 0;
}
