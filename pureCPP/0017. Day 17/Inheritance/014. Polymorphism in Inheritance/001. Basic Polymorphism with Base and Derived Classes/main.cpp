#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape." << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {  // Overriding the base class function
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Shape* shapePtr = new Circle();  // Base class pointer to derived class object
    shapePtr->draw();  // Calls Circle's draw function
    delete shapePtr;   // Clean up
    return 0;
}
