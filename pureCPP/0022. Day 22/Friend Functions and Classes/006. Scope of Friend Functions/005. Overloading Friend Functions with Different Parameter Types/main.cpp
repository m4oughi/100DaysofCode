#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;  // Private members

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Overloaded friend functions
    friend int calculate(Rectangle rect);
    friend double calculate(double radius);
};

// Friend function calculating area of Rectangle
int calculate(Rectangle rect) {
    return rect.length * rect.width;  // Accessing private members
}

// Friend function calculating area of a circle
double calculate(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    Rectangle rect(10, 5);
    double radius = 7.0;

    cout << "Area of rectangle: " << calculate(rect) << endl;  // Using friend function for Rectangle
    cout << "Area of circle: " << calculate(radius) << endl;  // Using overloaded friend function for circle
    return 0;
}
