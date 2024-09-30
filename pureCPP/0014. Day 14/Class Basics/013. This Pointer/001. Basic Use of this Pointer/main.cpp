#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int width) {
        this->width = width;  // Using `this` pointer to refer to the member variable
    }

    void display() {
        cout << "Width: " << this->width << endl;  // Using `this` to access member variables
    }
};

int main() {
    Box box(10);
    box.display();
    return 0;
}
