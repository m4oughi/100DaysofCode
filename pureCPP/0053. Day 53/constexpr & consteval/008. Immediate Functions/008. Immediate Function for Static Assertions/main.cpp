#include <iostream>

consteval void validate(int value) {
    if (value < 0) {
        throw "Value must be non-negative"; // Compile-time error if violated
    }
}

int main() {
    validate(10); // OK
    // validate(-5); // ❌ Compile-time error

    std::cout << "Compile-time check passed!\n";
    return 0;
}
