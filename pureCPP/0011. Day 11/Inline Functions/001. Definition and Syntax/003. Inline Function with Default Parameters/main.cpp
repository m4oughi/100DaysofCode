#include <iostream>

// Inline function to calculate the area of a rectangle with a default height
inline int area(int width, int height = 10) {
    return width * height;
}

int main() {
    std::cout << "Area (5, 10): " << area(5) << std::endl; // Output: Area (5, 10): 50
    std::cout << "Area (5, 7): " << area(5, 7) << std::endl; // Output: Area (5, 7): 35
    return 0;
}
