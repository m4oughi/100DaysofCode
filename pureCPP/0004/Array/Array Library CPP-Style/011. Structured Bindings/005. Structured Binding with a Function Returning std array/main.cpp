#include <iostream>
#include <array>

std::array<int, 2> getCoordinates() {
    return {100, 200};
}

int main() {
    auto [x, y] = getCoordinates();  // Using structured binding to unpack return values
    std::cout << "x: " << x << ", y: " << y << std::endl;  // Output: x: 100, y: 200

    return 0;
}