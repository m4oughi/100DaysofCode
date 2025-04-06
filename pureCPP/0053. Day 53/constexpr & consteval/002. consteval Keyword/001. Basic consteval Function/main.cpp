#include <iostream>

consteval int getValue() {
    return 42;
}

int main() {
    constexpr int value = getValue(); // Must be evaluated at compile-time
    std::cout << "Value: " << value << '\n';
    return 0;
}
