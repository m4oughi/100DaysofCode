#include <iostream>
using namespace std;

// Abstract Base Class 1
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {
        cout << "Shape Destructor" << endl;
    }
};

// Abstract Base Class 2
class Color {
public:
    virtual void fill() = 0;
    virtual ~Color() {
        cout << "Color Destructor" << endl;
    }
};

class Circle : public Shape, public Color {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    void fill() override {
        cout << "Filling Circle with Color" << endl;
    }
    ~Circle() override {
        cout << "Circle Destructor" << endl;
    }
};

int main() {
    Shape* shape = new Circle();  // Multiple inheritance scenario
    delete shape;  // Calls Circle and Shape destructors but misses Color destructor

    return 0;
}
