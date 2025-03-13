#include <iostream>

int main() {
    auto add = [](auto a, auto b) { return a + b; }; // Generic lambda

    std::cout << "Sum (int): " << add(3, 4) << std::endl;
    std::cout << "Sum (double): " << add(3.5, 2.5) << std::endl;

    return 0;
}
