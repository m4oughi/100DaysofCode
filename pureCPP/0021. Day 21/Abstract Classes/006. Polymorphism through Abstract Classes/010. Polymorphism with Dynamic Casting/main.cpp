#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    void specificCircleFunction() {
        cout << "Specific Circle Function." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

void drawShape(Shape* shape) {
    shape->draw();  // Polymorphic behavior

    Circle* circlePtr = dynamic_cast<Circle*>(shape);
    if (circlePtr) {
        circlePtr->specificCircleFunction();  // Safe casting to call derived class specific function
    }
}

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    drawShape(shape1);  // Outputs "Drawing Circle" and "Specific Circle Function."
    drawShape(shape2);  // Outputs "Drawing Rectangle"

    delete shape1;
    delete shape2;
    return 0;
}
