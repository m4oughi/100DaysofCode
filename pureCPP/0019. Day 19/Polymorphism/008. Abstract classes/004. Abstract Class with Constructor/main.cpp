#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {
        cout << "Shape constructor called" << endl;
    }

    virtual void draw() = 0;  // Pure virtual function
};

class Rectangle : public Shape {
public:
    Rectangle() {
        cout << "Rectangle constructor called" << endl;
    }

    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Rectangle rect;
    rect.draw();  // Calls Rectangle's implementation

    return 0;
}
