#include <iostream>

constexpr int value = 10;
static_assert(value > 5, "Value must be greater than 5");

int main() {
    std::cout << "Value is valid!\n";
    return 0;
}
