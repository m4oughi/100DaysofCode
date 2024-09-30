#include <iostream>
using namespace std;

class Box {
public:
    // Inline member function with default arguments
    inline int calculateVolume(int length = 1, int width = 1, int height = 1) {
        return length * width * height;
    }
};

int main() {
    Box box;
    cout << "Volume (default): " << box.calculateVolume() << endl;
    cout << "Volume (custom): " << box.calculateVolume(3, 4, 5) << endl;
    return 0;
}
