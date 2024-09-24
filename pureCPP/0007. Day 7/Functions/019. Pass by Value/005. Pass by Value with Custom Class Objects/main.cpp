#include <iostream>

class Box {
public:
    int length, width, height;
    Box(int l, int w, int h) : length(l), width(w), height(h) {}
};

void modifyBox(Box b) {
    b.length += 10;
    b.width += 10;
    b.height += 10;
}

int main() {
    Box myBox(5, 5, 5);
    modifyBox(myBox);
    std::cout << "Box dimensions after modification: " 
              << myBox.length << "x" << myBox.width << "x" << myBox.height << std::endl;  // Original object unchanged
    return 0;
}
