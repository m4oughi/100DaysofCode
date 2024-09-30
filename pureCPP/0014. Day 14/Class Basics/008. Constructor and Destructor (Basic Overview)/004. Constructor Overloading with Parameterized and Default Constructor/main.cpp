#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    // Default constructor
    Box() : length(1), width(1), height(1) {}

    // Parameterized constructor
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    int calculateVolume() {
        return length * width * height;
    }
};

int main() {
    Box defaultBox;  // Default constructor
    Box customBox(3, 4, 5);  // Parameterized constructor

    cout << "Volume (default): " << defaultBox.calculateVolume() << endl;
    cout << "Volume (custom): " << customBox.calculateVolume() << endl;
    return 0;
}
