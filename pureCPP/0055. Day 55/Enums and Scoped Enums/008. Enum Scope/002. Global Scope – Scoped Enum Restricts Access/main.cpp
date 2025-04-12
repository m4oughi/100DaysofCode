#include <iostream>

enum class Direction { North, East, South, West };

int main() {
    // Need scope to access enum values
    Direction d = Direction::East;
    std::cout << "Direction chosen.\n";
}
