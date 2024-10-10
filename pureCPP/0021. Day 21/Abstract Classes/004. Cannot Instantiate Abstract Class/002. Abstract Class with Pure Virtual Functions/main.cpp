#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
};

int main() {
    // Attempting to instantiate will cause a compilation error
    // Shape shape;  // Error: cannot declare variable 'shape' to be of abstract type 'Shape'
    return 0;
}
