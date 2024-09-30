#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int width) {
        this->width = width;
    }

    Box* setWidth(int width) {
        this->width = width;
        return this;  // Returning the `this` pointer
    }

    void display() {
        cout << "Width: " << this->width << endl;
    }
};

int main() {
    Box box(10);
    box.setWidth(20)->display();  // Chaining method calls using `this`
    return 0;
}
