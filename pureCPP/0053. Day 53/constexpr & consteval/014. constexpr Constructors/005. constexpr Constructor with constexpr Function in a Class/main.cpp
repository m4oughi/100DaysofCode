#include <iostream>

class Box {
public:
    constexpr Box(int l, int w, int h) : length(l), width(w), height(h) {}

    constexpr int getVolume() const { return length * width * height; }

private:
    int length, width, height;
};

int main() {
    constexpr Box b(3, 4, 5);
    constexpr int volume = b.getVolume();  // ✅ Compile-time evaluation

    std::cout << "Volume: " << volume << '\n';
}
