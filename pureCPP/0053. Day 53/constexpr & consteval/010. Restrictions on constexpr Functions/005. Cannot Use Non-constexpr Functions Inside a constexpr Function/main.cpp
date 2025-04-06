#include <iostream>

int nonConstexprFunction(int x) {
    return x * 2;
}

constexpr int doubleValue(int x) {
    // return nonConstexprFunction(x); ❌ ERROR: Calling non-constexpr function inside `constexpr`
    return x * 2;
}

int main() {
    constexpr int result = doubleValue(5);
    std::cout << "Result: " << result << '\n';
    return 0;
}
