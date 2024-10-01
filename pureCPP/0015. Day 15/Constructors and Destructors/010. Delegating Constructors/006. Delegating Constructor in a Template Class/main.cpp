#include <iostream>

template<typename T>
class Box {
private:
    T length;
    T width;
    T height;
public:
    // Delegating constructor 1
    Box() : Box(1, 1, 1) {
        std::cout << "Default box with dimensions 1x1x1 created." << std::endl;
    }

    // Delegating constructor 2
    Box(T l, T w) : Box(l, w, 1) {
        std::cout << "Box with dimensions " << l << "x" << w << "x1 created." << std::endl;
    }

    // Primary constructor
    Box(T l, T w, T h) : length(l), width(w), height(h) {
        std::cout << "Box created with dimensions " << length << "x" << width << "x" << height << "." << std::endl;
    }

    void display() const {
        std::cout << "Box dimensions: " << length << "x" << width << "x" << height << std::endl;
    }
};

int main() {
    Box<int> b1;              // Default box (1x1x1)
    b1.display();

    Box<int> b2(5, 3);        // Box (5x3x1)
    b2.display();

    Box<int> b3(5, 3, 2);     // Box (5x3x2)
    b3.display();

    return 0;
}
