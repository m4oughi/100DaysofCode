#include <iostream>

int main() {
    auto print = [](auto x) {
        std::cout << x << std::endl;
    };

    print(42);    // Outputs: 42
    print(3.14);  // Outputs: 3.14
    print("Hello, World!"); // Outputs: Hello, World!
    return 0;
}
