#include <iostream>

enum class Direction { North, East, South, West };

int main() {
    Direction d = Direction::East;

    switch (d) {
        case Direction::North: std::cout << "Going North\n"; break;
        case Direction::East: std::cout << "Going East\n"; break;
        case Direction::South: std::cout << "Going South\n"; break;
        case Direction::West: std::cout << "Going West\n"; break;
    }
}
