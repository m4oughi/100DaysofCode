#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l = 0, int w = 0) : length(l), width(w) {}

    Rectangle* setLength(int l) {
        this->length = l;
        return this;  // Returning `this` for chaining
    }

    Rectangle* setWidth(int w) {
        this->width = w;
        return this;  // Returning `this` for chaining
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(10)->setWidth(20)->display();  // Method chaining using `this`
    return 0;
}
