#include <iostream>

class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() {
        return width * height;
    }
};

// Function declaration returning an object of class
Rectangle createRectangle(int w, int h);

int main() {
    Rectangle rect = createRectangle(5, 10);  // Function call returning object
    std::cout << "Area: " << rect.area() << std::endl;
    return 0;
}

// Function definition returning a class object
Rectangle createRectangle(int w, int h) {
    return Rectangle(w, h);  // Returns a Rectangle object
}
