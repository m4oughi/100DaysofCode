#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
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

// Template function that accepts any Shape-derived type
template <typename T>
void renderShape(T shape) {
    shape.draw();  // Calls the draw function
}

int main() {
    Circle myCircle;
    Square mySquare;

    renderShape(myCircle);  // Calls Circle's draw function
    renderShape(mySquare);  // Calls Square's draw function

    return 0;
}
