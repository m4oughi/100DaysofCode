#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Friend function declarations
    friend int calculatePerimeter(Rectangle);
    friend int calculateArea(Rectangle);
};

// Friend function definitions
int calculatePerimeter(Rectangle r) {
    return 2 * (r.length + r.width);
}

int calculateArea(Rectangle r) {
    return r.length * r.width;
}

int main() {
    Rectangle rect(5, 10);
    cout << "Perimeter: " << calculatePerimeter(rect) << endl;
    cout << "Area: " << calculateArea(rect) << endl;
    return 0;
}
