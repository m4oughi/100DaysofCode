#include <iostream>
#include <memory>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    unique_ptr<Shape> shape1 = make_unique<Circle>();  // Creating derived class object with smart pointer
    unique_ptr<Shape> shape2 = make_unique<Square>();  // Another derived class object

    shape1->draw();  // Outputs "Drawing Circle"
    shape2->draw();  // Outputs "Drawing Square"

    // No need to manually delete, smart pointers automatically clean up memory
    return 0;
}
