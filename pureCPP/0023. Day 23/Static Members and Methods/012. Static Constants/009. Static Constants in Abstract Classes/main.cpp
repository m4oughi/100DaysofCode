#include <iostream>
using namespace std;

class Shape {
public:
    static const int maxShapes = 10;  // Static constant in abstract class
    virtual void draw() = 0;          // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Circle c;
    c.draw();

    // Accessing static constant from the abstract base class
    cout << "Maximum shapes allowed: " << Shape::maxShapes << endl;  // Output: 10
    return 0;
}
