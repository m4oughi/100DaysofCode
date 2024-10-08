#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Color {
public:
    virtual void fill() = 0;
};

class ColoredRectangle : public Shape, public Color {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }

    void fill() override {
        cout << "Filling Rectangle with color" << endl;
    }
};

int main() {
    ColoredRectangle rect;
    rect.draw();  // Calls draw() from Shape
    rect.fill();  // Calls fill() from Color

    return 0;
}
