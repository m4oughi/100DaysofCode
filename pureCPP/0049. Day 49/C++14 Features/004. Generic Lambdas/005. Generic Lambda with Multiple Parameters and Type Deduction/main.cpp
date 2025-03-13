#include <iostream>

int main() {
    auto printTypes = [](auto a, auto b, auto c) {
        std::cout << "Values: " << a << ", " << b << ", " << c << std::endl;
    };

    printTypes(1, 3.14, "Hello");

    return 0;
}
