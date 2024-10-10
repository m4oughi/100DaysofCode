#include <iostream>
#include <memory>
using namespace std;

// Abstract Base Class with Virtual Destructor
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual ~Shape() {  // Virtual destructor
        cout << "Shape Destructor" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
    ~Triangle() override {
        cout << "Triangle Destructor" << endl;
    }
};

int main() {
    unique_ptr<Shape> shape = make_unique<Triangle>();  // Polymorphic object with smart pointer
    shape->draw();  // Outputs "Drawing Triangle"

    // Automatic cleanup, calls Triangle destructor followed by Shape destructor
    return 0;
}
