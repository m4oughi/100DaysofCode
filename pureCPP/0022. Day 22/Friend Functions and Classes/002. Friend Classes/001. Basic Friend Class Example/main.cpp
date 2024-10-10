#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Declare Square as a friend class
    friend class Square;
};

class Square {
public:
    int calculateArea(Rectangle rect) {
        return rect.length * rect.width;  // Accessing private members of Rectangle
    }
};

int main() {
    Rectangle rect(10, 5);
    Square square;
    cout << "Area: " << square.calculateArea(rect) << endl;  // Using friend class
    return 0;
}
