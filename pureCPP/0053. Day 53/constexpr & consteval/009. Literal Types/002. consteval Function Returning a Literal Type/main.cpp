#include <iostream>

consteval int square(int x) {
    return x * x;
}

int main() {
    constexpr int result = square(5);  // OK
    std::cout << "Square of 5: " << result << '\n';

    // int x = 5;
    // int result2 = square(x);  // ❌ Compile-time error! `consteval` requires compile-time evaluation.
    
    return 0;
}
