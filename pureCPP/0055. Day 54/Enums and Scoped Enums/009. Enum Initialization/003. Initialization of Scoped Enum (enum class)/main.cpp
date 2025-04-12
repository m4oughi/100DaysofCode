#include <iostream>

enum class Direction { North, South, East, West };

int main() {
    Direction d = Direction::South;  // Must qualify with scope
    std::cout << "Scoped enum initialized.\n";
}
