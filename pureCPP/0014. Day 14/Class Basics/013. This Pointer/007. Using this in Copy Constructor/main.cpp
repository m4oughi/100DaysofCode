#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int width) : width(width) {}

    // Copy constructor using `this` pointer
    Box(const Box& other) {
        this->width = other.width;
    }

    void display() {
        cout << "Width: " << width << endl;
    }
};

int main() {
    Box box1(30);
    Box box2 = box1;  // Invokes copy constructor
    box2.display();
    return 0;
}
