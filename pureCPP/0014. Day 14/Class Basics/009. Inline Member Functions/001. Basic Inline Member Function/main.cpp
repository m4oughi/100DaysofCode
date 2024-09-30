#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    // Inline member function defined inside the class
    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.length = 5;
    rect.width = 3;
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
