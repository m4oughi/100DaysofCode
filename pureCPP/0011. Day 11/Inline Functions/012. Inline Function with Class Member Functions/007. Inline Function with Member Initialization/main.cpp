#include <iostream>

class Box {
private:
    int length, width, height;
public:
    // Inline constructor with member initialization list
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Inline function to compute volume
    inline int volume() const {
        return length * width * height;
    }
};

int main() {
    Box box(3, 4, 5);
    std::cout << "Volume: " << box.volume() << std::endl; // Output: Volume: 60
    return 0;
}
