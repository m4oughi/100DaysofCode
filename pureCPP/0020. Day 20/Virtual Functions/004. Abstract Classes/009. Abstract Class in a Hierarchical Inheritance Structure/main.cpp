#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Color {
public:
    virtual void applyColor() = 0; // Pure virtual function
};

class TexturedShape : public Shape {
public:
    virtual void applyTexture() = 0; // Pure virtual function
};

class TexturedColoredRectangle : public TexturedShape, public Color {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }

    void applyColor() override {
        cout << "Applying color to rectangle" << endl;
    }

    void applyTexture() override {
        cout << "Applying texture to rectangle" << endl;
    }
};

int main() {
    TexturedColoredRectangle rect;
    rect.draw();         // Calls draw()
    rect.applyColor();   // Calls applyColor()
    rect.applyTexture(); // Calls applyTexture()

    return 0;
}
