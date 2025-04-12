#include <iostream>

enum Direction { North, South, East, West };

void describe(Direction d) {
    switch (d) {
        case North: std::cout << "Heading North\n"; break;
        case South: std::cout << "Heading South\n"; break;
        case East:  std::cout << "Heading East\n";  break;
        default:    std::cout << "Probably West\n";
    }
}

int main() {
    describe(West);
}
