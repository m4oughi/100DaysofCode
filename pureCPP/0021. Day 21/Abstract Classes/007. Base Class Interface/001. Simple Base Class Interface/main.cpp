#include <iostream>
using namespace std;

class IShape {
public:
    virtual void draw() = 0;  // Pure virtual function as an interface
};

class Circle : public IShape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public IShape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    circle.draw();  // Outputs "Drawing Circle"
    rectangle.draw();  // Outputs "Drawing Rectangle"
    
    return 0;
}
