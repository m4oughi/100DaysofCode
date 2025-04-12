#include <iostream>
#include <string>

enum class Shape { Circle, Square, Triangle, Count };

constexpr const char* ShapeNames[] = { "Circle", "Square", "Triangle" };

int main() {
    Shape s = Shape::Square;
    std::cout << "Shape is: " << ShapeNames[static_cast<int>(s)] << "\n";
}
