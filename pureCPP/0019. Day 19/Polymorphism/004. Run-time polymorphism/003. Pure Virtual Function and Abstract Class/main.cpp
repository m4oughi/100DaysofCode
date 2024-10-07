#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function (abstract class)
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shape;
    Circle circle;
    Rectangle rectangle;

    shape = &circle;
    shape->draw();  // Calls Circle's draw function

    shape = &rectangle;
    shape->draw();  // Calls Rectangle's draw function

    return 0;
}
