#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    Rectangle(int l, int w) : length(l), width(w) {}

    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
};

void modifyDimensions(Rectangle &r) {  // Passed by reference
    r.length += 5;
    r.width += 5;
}

int main() {
    Rectangle rect1(10, 5);
    rect1.displayArea();

    modifyDimensions(rect1);  // Object passed as an argument by reference
    rect1.displayArea();  // Dimensions modified

    return 0;
}
