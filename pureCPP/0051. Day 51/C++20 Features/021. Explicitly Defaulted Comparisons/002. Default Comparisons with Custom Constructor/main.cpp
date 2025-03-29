#include <iostream>

struct Box {
    int length, width, height;

    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    auto operator<=>(const Box&) const = default;
};

int main() {
    Box b1(3, 4, 5), b2(3, 4, 5), b3(4, 4, 5);

    std::cout << std::boolalpha;
    std::cout << (b1 == b2) << "\n";  // true
    std::cout << (b1 < b3) << "\n";   // true

    return 0;
}
