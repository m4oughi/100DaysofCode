#include <iostream>
#include <tuple>

int main() {
    auto [a, b, c] = std::make_tuple(1, 2, 3);

    // Capturing structured bindings
    auto print = [a, b, c]() {
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    };

    print(); // Outputs: a: 1, b: 2, c: 3
    return 0;
}
