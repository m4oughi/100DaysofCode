#include <iostream>
#include <algorithm>

struct Color {
    int r, g, b;

    void clampColors() {
        r = std::clamp(r, 0, 255);
        g = std::clamp(g, 0, 255);
        b = std::clamp(b, 0, 255);
    }

    void print() {
        std::cout << "RGB(" << r << ", " << g << ", " << b << ")\n";
    }
};

int main() {
    Color color = {300, -20, 128};
    color.clampColors();  
    color.print();  // Output: RGB(255, 0, 128)

    return 0;
}
