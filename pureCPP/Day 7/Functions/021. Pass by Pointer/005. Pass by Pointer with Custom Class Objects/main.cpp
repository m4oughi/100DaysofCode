#include <iostream>

class Box {
public:
    int length, width, height;
    Box(int l, int w, int h) : length(l), width(w), height(h) {}
};

void enlargeBox(Box* b) {
    b->length += 10;
    b->width += 10;
    b->height += 10;
}

int main() {
    Box myBox(5, 5, 5);
    enlargeBox(&myBox);
    std::cout << "Box dimensions after enlargement: " 
              << myBox.length << "x" << myBox.width << "x" << myBox.height << std::endl;  // Original object is modified
    return 0;
}
