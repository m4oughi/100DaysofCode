#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    Shape* shape = new Circle();
    shape->draw(); // Calls Circle's draw()

    delete shape;
    return 0;
}
