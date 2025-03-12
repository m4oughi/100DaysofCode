#include <iostream>

int getValue() {
    return 42;
}

int main() {
    decltype(getValue()) result = getValue(); // Deduces int

    std::cout << "Result: " << result << std::endl;
    return 0;
}
