#include <iostream>

// Base class 1
class Shape {
public:
    void draw() const {
        std::cout << "Drawing shape..." << std::endl;
    }
};

// Base class 2
class Color {
public:
    void setColor(const std::string& color) {
        this->color = color;
    }
    
    void displayColor() const {
        std::cout << "Color: " << color << std::endl;
    }
    
private:
    std::string color;
};

// Derived class
class ColoredShape : public Shape, public Color {
public:
    // Override draw method to add color information
    void draw() const {
        Shape::draw(); // Call base class draw
        std::cout << "This shape is ";
        displayColor(); // Display color
    }
};

int main() {
    ColoredShape cs;
    cs.setColor("red");
    cs.draw();  // Output: Drawing shape... This shape is Color: red
    return 0;
}
