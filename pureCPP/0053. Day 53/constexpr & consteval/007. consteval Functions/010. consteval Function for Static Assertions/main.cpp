#include <iostream>

consteval void check(int value) {
    if (value < 0) {
        throw "Value must be non-negative"; // Will cause compile-time error
    }
}

int main() {
    check(10); // OK
    // check(-5); ❌ Compile error if uncommented

    std::cout << "Compile-time check passed!\n";
    return 0;
}
