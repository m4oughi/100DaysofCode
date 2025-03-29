#include <iostream>
#include <type_traits>

enum class Color { Red, Green, Blue };
enum Shape { Circle, Square };

int main() {
    std::cout << "Color is scoped enum: " << std::is_scoped_enum<Color>::value << "\n";  // true
    std::cout << "Shape is scoped enum: " << std::is_scoped_enum<Shape>::value << "\n";  // false
    return 0;
}
