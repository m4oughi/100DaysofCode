#include <iostream>
#include <algorithm>

struct RGB {
    int r, g, b;
};

int main() {
    RGB color = {300, -20, 150};
    int lower = 0, upper = 255;

    color.r = std::clamp(color.r, lower, upper);
    color.g = std::clamp(color.g, lower, upper);
    color.b = std::clamp(color.b, lower, upper);

    std::cout << "Clamped RGB: (" << color.r << ", " << color.g << ", " << color.b << ")\n";

    return 0;
}
