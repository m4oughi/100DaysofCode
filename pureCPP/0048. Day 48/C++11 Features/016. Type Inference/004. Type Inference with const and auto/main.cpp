#include <iostream>

int main() {
    const int x = 100;
    
    auto a = x;  // `a` is int (const is removed)
    auto& b = x; // `b` is const int& (const is preserved)

    a = 200;  // OK
    // b = 200;  // Error: b is const

    std::cout << "a: " << a << ", b: " << b << "\n";
    return 0;
}
