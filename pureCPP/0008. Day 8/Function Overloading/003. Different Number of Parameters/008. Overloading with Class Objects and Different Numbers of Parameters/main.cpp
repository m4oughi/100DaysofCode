#include <iostream>
using namespace std;

class Box {
public:
    int width, height;
    
    Box() {
        width = 0;
        height = 0;
    }

    Box(int w) {
        width = w;
        height = w;
    }

    Box(int w, int h) {
        width = w;
        height = h;
    }

    void show() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Box b1;               // Calls default constructor
    Box b2(5);            // Calls constructor with 1 parameter
    Box b3(4, 7);         // Calls constructor with 2 parameters
    
    b1.show();
    b2.show();
    b3.show();
    
    return 0;
}
