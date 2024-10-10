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

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

void renderShape(Shape* shape) {
    shape->draw();  // Polymorphic behavior
}

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    renderShape(&circle);     // Outputs "Drawing Circle"
    renderShape(&rectangle);  // Outputs "Drawing Rectangle"
    renderShape(&triangle);   // Outputs "Drawing Triangle"
    return 0;
}
