#include <iostream>
using namespace std;

class Drawable {
public:
    virtual void draw() = 0;  // Minimal interface for drawing
};

class Fillable {
public:
    virtual void fill() = 0;  // Minimal interface for filling
};

class Circle : public Drawable, public Fillable {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }

    void fill() override {
        cout << "Filling the circle" << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();
    circle.fill();
    return 0;
}
