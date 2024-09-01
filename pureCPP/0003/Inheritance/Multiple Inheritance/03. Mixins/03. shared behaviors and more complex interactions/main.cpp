#include <iostream>

// Mixin 1
class Shape {
public:
    virtual void draw() const = 0;  // Pure virtual function
};

// Mixin 2 with default behavior
class Color {
public:
    void setColor(const std::string& color) {
        this->color = color;
    }
    
    void showColor() const {
        std::cout << "Color: " << color << std::endl;
    }
    
private:
    std::string color;
};

// Mixin 3 with default behavior
class Texture {
public:
    void setTexture(const std::string& texture) {
        this->texture = texture;
    }
    
    void showTexture() const {
        std::cout << "Texture: " << texture << std::endl;
    }
    
private:
    std::string texture;
};

// Derived class using mixins
class AdvancedGraphic : public Shape, public Color, public Texture {
public:
    // Implement draw method to use Color and Texture information
    void draw() const override {
        std::cout << "Drawing advanced graphic with ";
        showColor();
        showTexture();
    }
};

int main() {
    AdvancedGraphic ag;
    ag.setColor("blue");
    ag.setTexture("smooth");
    ag.draw();  // Output: Drawing advanced graphic with Color: blue Texture: smooth
    return 0;
}
