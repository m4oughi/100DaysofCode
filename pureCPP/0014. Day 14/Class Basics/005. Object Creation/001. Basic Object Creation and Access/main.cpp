#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;  // Creating an object of Rectangle
    rect.length = 5;
    rect.width = 3;

    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
