#include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;

    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    Box addBoxes(const Box &b) const {
        return Box(length + b.length, width + b.width, height + b.height);  // Returning a temporary object
    }

    void display() const {
        cout << "Dimensions: " << length << " x " << width << " x " << height << endl;
    }
};

int main() {
    Box box1(2, 3, 4);
    Box box2(5, 6, 7);

    Box resultBox = box1.addBoxes(box2);  // Storing the returned temporary object
    resultBox.display();

    return 0;
}
