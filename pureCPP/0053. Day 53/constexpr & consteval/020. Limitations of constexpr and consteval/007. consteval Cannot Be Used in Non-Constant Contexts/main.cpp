#include <iostream>

consteval int getCompileTimeValue() {
    return 42;
}

int main() {
    int runtimeValue;
    std::cin >> runtimeValue;

    // int result = getCompileTimeValue() + runtimeValue;  // ❌ Compilation error
    constexpr int result = getCompileTimeValue();  // ✅ Works because it's a constant expression

    std::cout << "Value: " << result << '\n';
}
