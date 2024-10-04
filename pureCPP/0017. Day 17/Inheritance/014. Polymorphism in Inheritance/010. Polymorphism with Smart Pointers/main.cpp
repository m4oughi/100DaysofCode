#include <iostream>
#include <memory>  // For std::unique_ptr
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual ~Shape() {}        // Virtual destructor
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
    // Using unique_ptr for automatic memory management
    unique_ptr<Shape> shape1 = make_unique<Circle>();
    unique_ptr<Shape> shape2 = make_unique<Square>();

    shape1->draw();  // Calls Circle's draw function
    shape2->draw();  // Calls Square's draw function

    // No need to delete pointers; unique_ptr takes care of it
    return 0;
}
