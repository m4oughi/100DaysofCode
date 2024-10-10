#include <iostream>
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

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* circle = new Circle();
    Shape* rectangle = new Rectangle();

    circle->draw();    // Outputs "Drawing Circle"
    rectangle->draw(); // Outputs "Drawing Rectangle"

    delete circle;     // Clean up memory
    delete rectangle;  // Clean up memory

    return 0;
}
