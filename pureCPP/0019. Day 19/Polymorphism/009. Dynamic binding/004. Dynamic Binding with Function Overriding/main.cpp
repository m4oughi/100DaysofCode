#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
    virtual void color() {
        cout << "Coloring Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    void color() override {
        cout << "Coloring Circle Red" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
    void color() override {
        cout << "Coloring Square Blue" << endl;
    }
};

int main() {
    Shape* shape;
    Circle circle;
    Square square;

    shape = &circle;
    shape->draw();   // Calls Circle's draw due to dynamic binding
    shape->color();  // Calls Circle's color due to dynamic binding

    shape = &square;
    shape->draw();   // Calls Square's draw due to dynamic binding
    shape->color();  // Calls Square's color due to dynamic binding

    return 0;
}
