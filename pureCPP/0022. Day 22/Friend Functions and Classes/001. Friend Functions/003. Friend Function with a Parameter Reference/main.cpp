#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle() : length(10), width(5) {}

    // Friend function that modifies private members using reference
    friend void changeDimensions(Rectangle &rect);
};

void changeDimensions(Rectangle &rect) {
    rect.length = 20;  // Modify private member
    rect.width = 10;   // Modify private member
}

int main() {
    Rectangle rect;
    changeDimensions(rect);  // Modify object through friend function
    return 0;
}
