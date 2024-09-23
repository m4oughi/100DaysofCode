#include <iostream>

int main() {
    // Basic lambda invocation
    auto greet = []() {
        std::cout << "Hello, World!" << std::endl;
    };
    greet(); // Outputs: Hello, World!
    return 0;
}
