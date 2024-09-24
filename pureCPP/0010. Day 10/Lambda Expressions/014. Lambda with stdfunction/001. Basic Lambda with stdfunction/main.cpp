#include <iostream>
#include <functional>

int main() {
    std::function<void()> greet = []() {
        std::cout << "Hello, World!" << std::endl;
    };

    greet(); // Outputs: Hello, World!

    return 0;
}
