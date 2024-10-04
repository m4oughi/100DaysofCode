#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape." << endl;
    }
    void draw(int times) {  // Overloaded function
        for (int i = 0; i < times; ++i) {
            draw();  // Calls the base draw function
        }
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {  // Overriding the base class function
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Shape* shapePtr = new Circle();  // Base class pointer to derived class object
    shapePtr->draw();  // Calls Circle's draw function
    shapePtr->draw(3);  // Calls overloaded draw function
    delete shapePtr;   // Clean up
    return 0;
}
