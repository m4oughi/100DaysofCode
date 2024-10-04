#include <iostream>
#include <vector>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
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
    vector<Shape*> shapes;  // Vector of base class pointers
    shapes.push_back(new Circle());
    shapes.push_back(new Square());

    for (Shape* shape : shapes) {
        shape->draw();  // Calls the appropriate draw function
    }

    for (Shape* shape : shapes) {
        delete shape;   // Clean up
    }
    return 0;
}
