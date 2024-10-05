#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Color {
public:
    virtual void fill() = 0;  // Pure virtual function
};

class ColoredShape : public Shape, public Color {
public:
    void draw() override {
        cout << "Drawing a shape" << endl;
    }

    void fill() override {
        cout << "Filling with color" << endl;
    }
};

int main() {
    Shape* shapePtr = new ColoredShape();
    shapePtr->draw();  // Dynamic dispatch via Shape pointer
    
    Color* colorPtr = dynamic_cast<Color*>(shapePtr);
    if (colorPtr) {
        colorPtr->fill();  // Dynamic dispatch via Color pointer
    }
    
    delete shapePtr;
    return 0;
}
