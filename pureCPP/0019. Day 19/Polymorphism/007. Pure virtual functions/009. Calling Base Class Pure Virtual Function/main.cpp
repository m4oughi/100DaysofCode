#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function

    void defaultDraw() {  // Implementation of the pure virtual function
        cout << "Drawing default shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        Shape::defaultDraw();  // Calls the base class implementation
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();  // Calls Circle's implementation, which calls base class's implementation

    return 0;
}
