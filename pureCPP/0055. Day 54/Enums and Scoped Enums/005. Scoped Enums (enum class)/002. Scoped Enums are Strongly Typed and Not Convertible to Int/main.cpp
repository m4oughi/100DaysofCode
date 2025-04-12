#include <iostream>

enum class Color { Red, Green, Blue };

int main() {
    Color c = Color::Red;
    // int x = c; // ❌ Error: No implicit conversion
    int x = static_cast<int>(c); // ✅ Explicit cast
    std::cout << "Color value: " << x << std::endl;
}
