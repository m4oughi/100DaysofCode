#include <iostream>

enum Color { Red, Green, Blue };

void printColor(Color c) {
    switch (c) {
        case Red:
            std::cout << "Red\n";
            break;
        case Green:
            std::cout << "Green\n";
            break;
        case Blue:
            std::cout << "Blue\n";
            break;
    }
}

int main() {
    Color myColor = Green;
    printColor(myColor);
}
