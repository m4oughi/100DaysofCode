#include <iostream>

consteval int getValue() {
    return 42;
}

int main() {
    constexpr int val = getValue();  // OK
    std::cout << "Value: " << val << '\n';
    return 0;
}
