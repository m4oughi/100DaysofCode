#include <iostream>

enum class Shape { Circle, Square, Triangle };

double area(Shape shape, double size) {
    switch (shape) {
        case Shape::Circle:   return 3.14 * size * size;
        case Shape::Square:   return size * size;
        case Shape::Triangle: return 0.5 * size * size;
    }
    return 0.0; // fallback
}

int main() {
    std::cout << "Area of circle: " << area(Shape::Circle, 5.0) << "\n";
}
