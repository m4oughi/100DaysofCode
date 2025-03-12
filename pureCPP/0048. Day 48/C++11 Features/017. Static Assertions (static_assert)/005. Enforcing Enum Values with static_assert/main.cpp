#include <iostream>

enum class Color { Red, Green, Blue };

static_assert(static_cast<int>(Color::Red) == 0, "Red must be 0");

int main() {
    std::cout << "Enum validation passed!\n";
    return 0;
}
