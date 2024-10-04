#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape." << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() override {  // Overriding the base class function
        cout << "Drawing a triangle." << endl;
    }
};

// Function that accepts a base class pointer
void render(Shape* shape) {
    shape->draw();  // Calls the appropriate draw function
}

int main() {
    Shape* shapePtr = new Triangle();  // Base class pointer to derived class object
    render(shapePtr);  // Calls Triangle's draw function
    delete shapePtr;   // Clean up
    return 0;
}
