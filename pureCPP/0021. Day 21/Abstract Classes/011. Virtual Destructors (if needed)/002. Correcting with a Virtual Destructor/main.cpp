#include <iostream>
using namespace std;

// Abstract Base Class with Virtual Destructor
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual ~Shape() {  // Virtual destructor
        cout << "Shape Destructor" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    ~Circle() override {
        cout << "Circle Destructor" << endl;
    }
};

int main() {
    Shape* shape = new Circle();  // Polymorphic object
    delete shape;  // Properly calls Circle and then Shape destructor

    return 0;
}
