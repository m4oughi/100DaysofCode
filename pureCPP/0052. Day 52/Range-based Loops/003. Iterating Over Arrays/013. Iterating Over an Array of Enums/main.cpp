#include <iostream>

enum Color { RED, GREEN, BLUE, YELLOW };

int main() {
    Color colors[] = {RED, GREEN, BLUE, YELLOW};

    for (auto color : colors) {
        std::cout << color << " "; // Prints enum values as integers
    }

    return 0;
}
