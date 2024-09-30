#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int length, int width) {
        this->length = length;  // Resolving name conflict with `this`
        this->width = width;
    }

    void display() {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main() {
    Rectangle rect(5, 10);
    rect.display();
    return 0;
}
