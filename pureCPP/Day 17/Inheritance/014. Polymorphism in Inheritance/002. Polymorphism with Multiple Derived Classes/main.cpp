#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape." << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {  // Overriding the base class function
        cout << "Drawing a circle." << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() override {  // Overriding the base class function
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle();  // Array of base class pointers
    shapes[1] = new Square();

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();  // Calls the appropriate draw function
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];   // Clean up
    }
    return 0;
}
