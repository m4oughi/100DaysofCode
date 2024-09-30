#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l = 1, int w = 1, int h = 1) : length(l), width(w), height(h) {}

    // Member function with default arguments
    int calculateVolume(int l = 1, int w = 1, int h = 1) {
        return l * w * h;
    }
};

int main() {
    Box box;
    cout << "Volume (default): " << box.calculateVolume() << endl;
    cout << "Volume (custom): " << box.calculateVolume(3, 4, 5) << endl;
    return 0;
}
