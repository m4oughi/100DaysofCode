#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void display() const {
        cout << "Radius: " << radius << endl;
    }
};

int main() {
    Circle c(10.5);

    // Declaring a pointer to a const member function
    void (Circle::*displayPtr)() const = &Circle::display;

    // Calling the const member function using the pointer
    (c.*displayPtr)();

    return 0;
}
