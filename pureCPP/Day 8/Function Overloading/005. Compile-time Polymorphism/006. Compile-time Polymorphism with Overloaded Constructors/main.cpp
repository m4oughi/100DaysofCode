#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    Rectangle(int w) {
        width = w;
        height = w;
    }

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect1(5, 10);  // Calls constructor with two parameters
    Rectangle rect2(7);      // Calls constructor with one parameter (square)
    
    cout << "Area of rect1: " << rect1.area() << endl;
    cout << "Area of rect2: " << rect2.area() << endl;
    
    return 0;
}
