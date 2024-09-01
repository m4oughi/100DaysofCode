#include <iostream>

// Interface 1
class Drawable {
public:
    virtual void draw() const = 0;  // Pure virtual function
};

// Interface 2
class Resizable {
public:
    virtual void resize(int width, int height) = 0;  // Pure virtual function
};

// Combined class
class GraphicObject : public Drawable, public Resizable {
public:
    void draw() const override {
        std::cout << "Drawing graphic object..." << std::endl;
    }
    
    void resize(int width, int height) override {
        std::cout << "Resizing to " << width << "x" << height << std::endl;
    }
};

int main() {
    GraphicObject go;
    go.draw();
    go.resize(800, 600);
    return 0;
}
