#include <iostream>
using namespace std;

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

void displayShape(Shape& shape) {
    shape.draw();  // Dynamic dispatch using a reference
}

int main() {
    Circle circle;
    Square square;

    displayShape(circle);  // Outputs "Drawing Circle"
    displayShape(square);  // Outputs "Drawing Square"
    
    return 0;
}
