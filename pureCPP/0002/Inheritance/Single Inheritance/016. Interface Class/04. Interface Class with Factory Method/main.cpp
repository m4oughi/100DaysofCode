#include <iostream>
using namespace std;

// Interface class
class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

// Concrete classes implementing the interface
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        cout << "Drawing a square." << endl;
    }
};

// Factory class to create shapes
class ShapeFactory {
public:
    static Shape* createShape(const string& shapeType) {
        if (shapeType == "circle") {
            return new Circle();
        } else if (shapeType == "square") {
            return new Square();
        } else {
            return nullptr;
        }
    }
};

int main() {
    Shape* shape1 = ShapeFactory::createShape("circle");
    Shape* shape2 = ShapeFactory::createShape("square");

    if (shape1) {
        shape1->draw(); // Calls draw() from Circle
        delete shape1;
    }

    if (shape2) {
        shape2->draw(); // Calls draw() from Square
        delete shape2;
    }

    return 0;
}
