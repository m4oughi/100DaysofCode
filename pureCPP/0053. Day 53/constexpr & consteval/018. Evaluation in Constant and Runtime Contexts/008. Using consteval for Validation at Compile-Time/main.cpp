#include <iostream>

consteval int checkValue(int x) {
    if (x < 0) {
        throw "Negative values are not allowed!";
    }
    return x;
}

constexpr int safeValue(int x) {
    return checkValue(x);  // Only valid if x is a compile-time constant
}

int main() {
    constexpr int value = safeValue(10);  // OK
    std::cout << "Valid Value: " << value << '\n';

    // int userValue;
    // std::cin >> userValue;
    // int runtimeValue = safeValue(userValue);  // ❌ Compilation error!
}
