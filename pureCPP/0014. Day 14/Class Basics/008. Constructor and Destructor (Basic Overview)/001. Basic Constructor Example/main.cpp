#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 3);  // Constructor called
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
