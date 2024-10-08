#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function

    void info() {
        cout << "This is a 2D shape." << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* shape1 = new Triangle();
    Shape* shape2 = new Square();

    shape1->info();  // Calls concrete method from Shape
    shape1->draw();  // Calls Triangle's draw()

    shape2->info();  // Calls concrete method from Shape
    shape2->draw();  // Calls Square's draw()

    delete shape1;
    delete shape2;
    return 0;
}
