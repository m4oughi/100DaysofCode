#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Granting access to this specific function
    friend int calculateArea(Rectangle rect);
};

// Friend function accessing private members
int calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    Rectangle rect(10, 5);
    cout << "Area: " << calculateArea(rect) << endl;  // Friend function accessing private data
    return 0;
}
