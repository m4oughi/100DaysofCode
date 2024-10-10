#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    Shape() {
        cout << "Shape constructor called!" << endl;
    }
    
    virtual ~Shape() {
        cout << "Shape destructor called!" << endl;
    }
    
    virtual void draw() = 0;  // Pure virtual function
};

// Derived Class
class Circle : public Shape {
public:
    Circle() {
        cout << "Circle constructor called!" << endl;
    }
    
    ~Circle() {
        cout << "Circle destructor called!" << endl;
    }
    
    void draw() override {
        cout << "Drawing a circle!" << endl;
    }
};

int main() {
    Shape* shape = new Circle();
    shape->draw();  // Outputs: Drawing a circle!
    delete shape;   // Outputs destructors in reverse order: Circle, Shape

    return 0;
}
