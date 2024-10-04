#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual ~Shape() {  // Virtual destructor
        cout << "Shape destroyed." << endl;
    }
    virtual void draw() = 0;  // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
public:
    ~Circle() override {
        cout << "Circle destroyed." << endl;
    }
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Shape* shapePtr = new Circle();  // Base class pointer to derived class object
    shapePtr->draw();  // Calls Circle's draw function
    delete shapePtr;   // Calls destructors in proper order
    return 0;
}
