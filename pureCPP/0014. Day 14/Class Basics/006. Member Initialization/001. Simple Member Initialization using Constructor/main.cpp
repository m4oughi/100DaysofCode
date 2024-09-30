#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor initializing members
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 3);  // Object creation with initialization
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
