#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}

    // Overloading assignment operator
    Box& operator=(const Box& other) {
        if (this != &other) {  // Avoid self-assignment
            this->width = other.width;
        }
        return *this;  // Return dereferenced `this`
    }

    void display() const {
        cout << "Width: " << width << endl;
    }
};

int main() {
    Box box1(60);
    Box box2(70);
    box2 = box1;  // Invokes assignment operator
    box2.display();
    return 0;
}
