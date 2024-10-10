#include <iostream>
using namespace std;

// Abstract Base Class (Blueprint)
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function as a blueprint
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

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();  // Outputs "Drawing Circle"
    shape2->draw();  // Outputs "Drawing Square"

    delete shape1;
    delete shape2;
    
    return 0;
}
