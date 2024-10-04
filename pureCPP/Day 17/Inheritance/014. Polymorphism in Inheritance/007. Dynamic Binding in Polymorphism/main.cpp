#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape." << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() override {  // Overriding the base class function
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shapePtr = new Rectangle();  // Base class pointer to derived class object
    shapePtr->draw();  // Dynamic binding: calls Rectangle's draw function
    delete shapePtr;   // Clean up
    return 0;
}
