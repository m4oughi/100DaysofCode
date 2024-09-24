#include <iostream>
#include <string>

int main() {
    auto concatenate = [](auto a, auto b) -> decltype(a + b) {
        return a + b;
    };

    std::cout << concatenate(5, 3) << std::endl;           // Outputs: 8
    std::cout << concatenate(2.5, 4.5) << std::endl;       // Outputs: 7
    std::cout << concatenate(std::string("Hello, "), "World!") << std::endl; // Outputs: Hello, World!
    return 0;
}
