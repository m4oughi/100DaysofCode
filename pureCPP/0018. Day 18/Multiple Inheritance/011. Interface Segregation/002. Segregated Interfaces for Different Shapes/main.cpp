#include <iostream>
using namespace std;

class Drawable {
public:
    virtual void draw() = 0;  // Interface for drawing shapes
};

class Fillable {
public:
    virtual void fill() = 0;  // Interface for filling shapes
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

class Line : public Drawable {
public:
    void draw() override {
        cout << "Drawing a line" << endl;
    }
};

int main() {
    Circle circle;
    Line line;
    
    circle.draw();
    circle.fill();
    
    line.draw();
    // line.fill();  // Error! Line does not implement Fillable interface
    return 0;
}
