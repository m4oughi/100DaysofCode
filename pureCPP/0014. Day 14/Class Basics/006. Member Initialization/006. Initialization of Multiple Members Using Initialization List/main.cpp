#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Multiple members initialized via initialization list
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    int calculateVolume() {
        return length * width * height;
    }
};

int main() {
    Box box(4, 5, 6);  // Object creation with initialization
    cout << "Volume: " << box.calculateVolume() << endl;
    return 0;
}
