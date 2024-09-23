#include <iostream>

int main() {
    // Generic lambda that can take any type of parameters
    auto genericLambda = [](auto a, auto b) {
        return a + b;
    };
    std::cout << "Sum (int): " << genericLambda(5, 10) << std::endl;
    std::cout << "Sum (double): " << genericLambda(5.5, 2.3) << std::endl;
    std::cout << "Concatenation (string): " << genericLambda(std::string("Hello "), "World!") << std::endl;
    return 0;
}
