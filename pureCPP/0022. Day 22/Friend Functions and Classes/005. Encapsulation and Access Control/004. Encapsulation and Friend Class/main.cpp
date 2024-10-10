#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;  // Encapsulated data

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Declare a friend class
    friend class RectangleOperations;
};

// Friend class with access to private members
class RectangleOperations {
public:
    int calculateArea(Rectangle rect) {
        return rect.length * rect.width;  // Accessing encapsulated private members
    }

    void displayDimensions(Rectangle rect) {
        cout << "Length: " << rect.length << ", Width: " << rect.width << endl;
    }
};

int main() {
    Rectangle rect(10, 5);
    RectangleOperations ops;
    cout << "Area: " << ops.calculateArea(rect) << endl;  // Friend class accessing encapsulated data
    ops.displayDimensions(rect);  // Controlled access through friend class
    return 0;
}
