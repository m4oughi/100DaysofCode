#include <iostream>

namespace Geometry {
    class Rectangle {
    private:
        int width, height;

    public:
        Rectangle(int w, int h) : width(w), height(h) {}

        int area() {
            return width * height;
        }
    };
}

int main() {
    Geometry::Rectangle rect(5, 6);
    std::cout << "Area of rectangle: " << rect.area() << std::endl;
    return 0;
}
