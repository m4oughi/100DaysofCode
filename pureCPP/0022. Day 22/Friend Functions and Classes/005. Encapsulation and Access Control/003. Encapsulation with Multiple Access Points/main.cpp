#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;  // Encapsulated data

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Friend functions with specific access responsibilities
    friend int calculateVolume(Box box);
    friend void displayDimensions(Box box);
};

// Friend function calculating volume
int calculateVolume(Box box) {
    return box.length * box.width * box.height;  // Accessing encapsulated data
}

// Friend function displaying dimensions
void displayDimensions(Box box) {
    cout << "Length: " << box.length << ", Width: " << box.width << ", Height: " << box.height << endl;
}

int main() {
    Box box(10, 5, 8);
    cout << "Volume: " << calculateVolume(box) << endl;  // Controlled access to encapsulated data
    displayDimensions(box);  // Different function for accessing encapsulated data
    return 0;
}
