#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function

    void description() {      // Non-pure virtual function
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle circle;
    circle.description();  // Calls base class non-pure virtual function
    circle.draw();         // Calls Circle's implementation of the pure virtual function

    return 0;
}
