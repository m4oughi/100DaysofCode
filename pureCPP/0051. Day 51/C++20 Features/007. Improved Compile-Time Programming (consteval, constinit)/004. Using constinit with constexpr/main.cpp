#include <iostream>

constexpr int getInitialValue() {
    return 10;
}

constinit int global_value = getInitialValue(); // OK: `getInitialValue()` is constexpr

int main() {
    std::cout << "Global value: " << global_value << "\n";
}
