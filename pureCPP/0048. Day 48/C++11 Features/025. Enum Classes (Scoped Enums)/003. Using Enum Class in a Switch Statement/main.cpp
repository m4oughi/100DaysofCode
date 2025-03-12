#include <iostream>

enum class Direction { North, East, South, West };

void printDirection(Direction dir) {
    switch (dir) {
        case Direction::North: std::cout << "Going North\n"; break;
        case Direction::East: std::cout << "Going East\n"; break;
        case Direction::South: std::cout << "Going South\n"; break;
        case Direction::West: std::cout << "Going West\n"; break;
    }
}

int main() {
    Direction dir = Direction::East;
    printDirection(dir);
    return 0;
}
