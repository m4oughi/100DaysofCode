#include <iostream>
using namespace std;

// Abstract Base Class without Virtual Destructor
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    ~Shape() {  // Non-virtual destructor
        cout << "Shape Destructor" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    ~Circle() {
        cout << "Circle Destructor" << endl;
    }
};

int main() {
    Shape* shape = new Circle();  // Polymorphic object
    delete shape;  // Undefined behavior, destructor of Shape is called instead of Circle

    return 0;
}
