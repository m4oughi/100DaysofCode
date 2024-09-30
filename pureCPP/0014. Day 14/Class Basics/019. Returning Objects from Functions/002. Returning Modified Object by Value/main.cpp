#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    Rectangle(int l, int w) : length(l), width(w) {}

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

Rectangle resizeRectangle(Rectangle r, int factor) {
    r.length *= factor;
    r.width *= factor;
    return r;  // Returning the modified object
}

int main() {
    Rectangle rect(10, 5);
    rect.display();

    Rectangle largerRect = resizeRectangle(rect, 2);  // Receiving the modified object
    largerRect.display();

    return 0;
}
