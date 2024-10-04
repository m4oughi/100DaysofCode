#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle myCircle;
    Square mySquare;

    shapePtr = &myCircle;
    shapePtr->draw();  // Calls Circle's draw()

    shapePtr = &mySquare;
    shapePtr->draw();  // Calls Square's draw()

    return 0;
}
