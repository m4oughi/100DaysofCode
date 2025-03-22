#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {10, 20, 30};

    auto [x, y, z] = arr;

    std::cout << "x: " << x << ", y: " << y << ", z: " << z << '\n';
    return 0;
}
