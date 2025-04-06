#include <iostream>

consteval int getValue() {
    return 100;
}

int main() {
    constexpr int val = getValue();  // OK
    std::cout << "Value: " << val << '\n';
    return 0;
}
