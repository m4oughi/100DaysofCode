#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;

    Box(int l, int w) : length(l), width(w) {}

    bool isSameArea(Box b) {  // Object passed to member function by value
        return (length * width) == (b.length * b.width);
    }
};

int main() {
    Box box1(10, 5);
    Box box2(5, 10);

    if (box1.isSameArea(box2)) {
        cout << "Both boxes have the same area." << endl;
    } else {
        cout << "Boxes have different areas." << endl;
    }

    return 0;
}
