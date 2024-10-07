#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

void callDraw(Shape* shapePtr) {
    shapePtr->draw();  // Calls the appropriate draw method using dynamic binding
}

int main() {
    Shape* shape;
    Circle circle;

    shape = &circle;
    callDraw(shape);  // Calls Circle's draw method

    return 0;
}
