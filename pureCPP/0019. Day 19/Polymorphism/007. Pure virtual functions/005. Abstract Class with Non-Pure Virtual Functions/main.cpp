#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual void color() {    // Non-pure virtual function
        cout << "Coloring Shape" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }

    void color() override {
        cout << "Coloring Triangle" << endl;
    }
};

int main() {
    Triangle triangle;
    triangle.draw();  // Calls Triangle's draw method
    triangle.color(); // Calls Triangle's color method

    return 0;
}
