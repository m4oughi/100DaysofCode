#include <iostream>

class Rectangle {
public:
    constexpr Rectangle(int w, int h) : width(w), height(h) {}

    constexpr int getArea() const { return width * height; }

private:
    int width, height;
};

int main() {
    constexpr Rectangle r(4, 5);
    constexpr int area = r.getArea();  // ✅ Compile-time computation

    std::cout << "Area: " << area << '\n';
}
