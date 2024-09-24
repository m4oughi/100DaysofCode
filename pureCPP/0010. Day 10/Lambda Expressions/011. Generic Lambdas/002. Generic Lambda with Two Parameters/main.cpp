#include <iostream>

int main() {
    auto add = [](auto a, auto b) {
        return a + b;
    };

    std::cout << add(5, 3) << std::endl;       // Outputs: 8
    std::cout << add(2.5, 4.5) << std::endl;   // Outputs: 7
    std::cout << add(std::string("Hello, "), "World!") << std::endl; // Outputs: Hello, World!
    return 0;
}
