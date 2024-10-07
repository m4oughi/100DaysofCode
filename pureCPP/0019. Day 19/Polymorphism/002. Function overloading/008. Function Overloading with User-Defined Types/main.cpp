#include <iostream>
using namespace std;

class Box {
public:
    int length, width;

    Box(int l, int w) : length(l), width(w) {}

    int area() {
        return length * width;
    }
};

void display(Box& b) {
    cout << "Box area: " << b.area() << endl;
}

void display(int area) {
    cout << "Area: " << area << endl;
}

int main() {
    Box box1(5, 6);
    display(box1);         // Calls function with Box parameter
    display(20);           // Calls function with int parameter

    return 0;
}
