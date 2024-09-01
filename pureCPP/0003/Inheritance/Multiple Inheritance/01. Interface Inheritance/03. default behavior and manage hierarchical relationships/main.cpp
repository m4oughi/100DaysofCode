#include <iostream>

// Interface 1
class Shape {
public:
    virtual void draw() const = 0;  // Pure virtual function
};

// Interface 2 with default behavior
class Transformable {
public:
    virtual void move(int x, int y) {
        std::cout << "Moving to position (" << x << ", " << y << ")" << std::endl;
    }
};

// Combined class
class Rectangle : public Shape, public Transformable {
public:
    void draw() const override {
        std::cout << "Drawing rectangle..." << std::endl;
    }

    // Overriding move to customize behavior
    void move(int x, int y) override {
        std::cout << "Moving rectangle to position (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Rectangle rect;
    rect.draw();
    rect.move(10, 20);
    return 0;
}
