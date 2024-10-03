#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}

    // Friend function for overloading ==
    friend bool operator==(const Rectangle& r1, const Rectangle& r2);
};

// Overloading == using a friend function
bool operator==(const Rectangle& r1, const Rectangle& r2) {
    return (r1.width == r2.width && r1.height == r2.height);
}

int main() {
    Rectangle r1(10, 5), r2(10, 5), r3(7, 8);
    if (r1 == r2)  // Using overloaded ==
        cout << "r1 and r2 are equal." << endl;  // Output: r1 and r2 are equal.
    else
        cout << "r1 and r2 are not equal." << endl;

    if (r1 == r3)
        cout << "r1 and r3 are equal." << endl;
    else
        cout << "r1 and r3 are not equal." << endl;  // Output: r1 and r3 are not equal.
    return 0;
}
