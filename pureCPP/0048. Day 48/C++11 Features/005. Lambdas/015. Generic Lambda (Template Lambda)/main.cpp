#include <iostream>

int main() {
    auto genericLambda = [](auto x, auto y) {
        return x + y;
    };

    std::cout << "Sum (int): " << genericLambda(5, 10) << std::endl;
    std::cout << "Sum (double): " << genericLambda(3.5, 2.2) << std::endl;
    std::cout << "Sum (string): " << genericLambda(std::string("Hello "), "Lambda!") << std::endl;

    return 0;
}
