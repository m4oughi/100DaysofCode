#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Inline member function
    inline int calculateArea() {
        return length * width;
    }

    // Non-inline member function
    int calculatePerimeter();
};

// Definition of non-inline member function
int Rectangle::calculatePerimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle rect(4, 5);
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;
    return 0;
}
