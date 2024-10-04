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
    void draw() override {  // Overriding the pure virtual function
        cout << "Drawing a circle." << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() override {  // Overriding the pure virtual function
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle();  // Base class pointer to derived class object
    shapes[1] = new Square();

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();  // Calls the appropriate draw function
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];   // Clean up
    }
    return 0;
}
