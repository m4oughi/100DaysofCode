#include <iostream>
using namespace std;

class Box {
    int length, width;

public:
    Box(int l, int w = 5) : length(l), width(w) {}

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Box box1(10);       // Uses default width
    Box box2(10, 15);   // Custom width provided

    box1.display();
    box2.display();
    return 0;
}
