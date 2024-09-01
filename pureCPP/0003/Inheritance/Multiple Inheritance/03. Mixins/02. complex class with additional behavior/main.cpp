#include <iostream>

// Mixin 1
class Drawable {
public:
    void draw() const {
        std::cout << "Drawing..." << std::endl;
    }
};

// Mixin 2
class Resizable {
public:
    void resize(int width, int height) {
        std::cout << "Resizing to " << width << "x" << height << std::endl;
    }
};

// Mixin 3
class Movable {
public:
    void move(int x, int y) {
        std::cout << "Moving to position (" << x << ", " << y << ")" << std::endl;
    }
};

// Derived class using mixins
class GraphicObject : public Drawable, public Resizable, public Movable {
public:
    // Inherits functionalities from Drawable, Resizable, and Movable
};

int main() {
    GraphicObject go;
    go.draw();          // Output: Drawing...
    go.resize(800, 600); // Output: Resizing to 800x600
    go.move(10, 20);    // Output: Moving to position (10, 20)
    return 0;
}
