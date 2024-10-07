#include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;

    Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}

    bool operator<(const Box& b) const {
        return length * width * height < b.length * b.width * b.height;
    }

    bool operator>(const Box& b) const {
        return length * width * height > b.length * b.width * b.height;
    }

    void display() const {
        cout << "Box dimensions: " << length << " x " << width << " x " << height << endl;
    }
};

int main() {
    Box box1(2, 3, 4);
    Box box2(1, 2, 3);

    if (box1 > box2) {
        cout << "Box 1 is larger than Box 2" << endl;
    } else {
        cout << "Box 1 is smaller than or equal to Box 2" << endl;
    }

    return 0;
}
