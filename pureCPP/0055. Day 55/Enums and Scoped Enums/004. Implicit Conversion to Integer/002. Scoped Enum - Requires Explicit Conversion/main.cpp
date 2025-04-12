#include <iostream>

enum class Direction { North, South, East, West };

int main() {
    Direction dir = Direction::East;
    // int value = dir; // ❌ Compilation error: no implicit conversion
    int value = static_cast<int>(dir); // ✅ Explicit conversion
    std::cout << "Direction::East as int: " << value << std::endl;
}
