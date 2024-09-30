#include <iostream>
using namespace std;

struct Rectangle {
    int length, width;

    int area() const {  // Struct can have member functions too
        return length * width;
    }

    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(4, 5);
    cout << "Area of Rectangle: " << rect.area() << endl;

    return 0;
}
