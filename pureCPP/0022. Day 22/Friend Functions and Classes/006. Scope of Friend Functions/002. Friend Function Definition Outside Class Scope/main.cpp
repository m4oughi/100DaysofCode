#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;  // Private members

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Friend function declaration within class scope
    friend int calculateArea(Rectangle rect);
};

// Friend function definition outside class scope
int calculateArea(Rectangle rect) {
    return rect.length * rect.width;  // Accessing private members
}

int main() {
    Rectangle rect(10, 5);
    cout << "Area: " << calculateArea(rect) << endl;  // Accessing private members via friend function
    return 0;
}
