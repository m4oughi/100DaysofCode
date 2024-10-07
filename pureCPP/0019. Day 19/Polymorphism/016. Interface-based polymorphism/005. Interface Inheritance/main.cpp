#include <iostream>
using namespace std;

class Drawable {
public:
    virtual void draw() const = 0;  // Pure virtual function
};

class Transformable {
public:
    virtual void rotate() = 0;      // Pure virtual function
    virtual void scale() = 0;       // Pure virtual function
};

class DrawableTransformable : public Drawable, public Transformable {
public:
    void draw() const override {
        cout << "Drawing a shape..." << endl;
    }
    void rotate() override {
        cout << "Rotating a shape..." << endl;
    }
    void scale() override {
        cout << "Scaling a shape..." << endl;
    }
};

int main() {
    DrawableTransformable dt;

    Drawable* drawablePtr = &dt;
    Transformable* transformablePtr = &dt;

    drawablePtr->draw();
    transformablePtr->rotate();
    transformablePtr->scale();

    return 0;
}
