#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Granting access to this function without modifying data
    friend void displayDimensions(const Box& box);
};

// Friend function with const reference
void displayDimensions(const Box& box) {
    cout << "Length: " << box.length << ", Width: " << box.width << ", Height: " << box.height << endl;
}

int main() {
    Box box(10, 5, 8);
    displayDimensions(box);  // Friend function accessing data without modifying it
    return 0;
}
