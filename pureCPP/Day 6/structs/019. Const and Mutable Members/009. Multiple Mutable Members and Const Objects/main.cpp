#include <iostream>

struct Box {
    int length;
    mutable int width;
    mutable int height;

    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    void show() const {
        std::cout << "Length: " << length << ", Width: " << width << ", Height: " << height << std::endl;
    }

    void setWidth(int w) const {
        width = w;  // Allowed as width is mutable
    }

    void setHeight(int h) const {
        height = h;  // Allowed as height is mutable
    }
};

int main() {
    const Box box(10, 5, 3);  // Constant object
    box.show();
    box.setWidth(8);  // Modifies mutable member
    box.setHeight(6);  // Modifies mutable member
    box.show();
    return 0;
}
