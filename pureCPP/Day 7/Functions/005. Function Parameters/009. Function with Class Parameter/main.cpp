#include <iostream>

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() const { return width * height; }
};

// Function declaration with class parameter
void printArea(const Rectangle& rect);

int main() {
    Rectangle r(5, 10);
    printArea(r);  // Function call with class object
    return 0;
}

// Function definition with class parameter
void printArea(const Rectangle& rect) {
    std::cout << "Area: " << rect.area() << std::endl;
}
