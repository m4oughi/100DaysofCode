#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Friend function declaration
    friend int calculateArea(Rectangle);
};

// Friend function definition
int calculateArea(Rectangle r) {
    return r.length * r.width;
}

int main() {
    Rectangle rect(5, 10);
    cout << "Area of Rectangle: " << calculateArea(rect) << endl;
    return 0;
}
