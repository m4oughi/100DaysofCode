#include <iostream>

struct Square {
    int side;

    // Parameterized constructor
    Square(int s) : side(s) {}

    // Copy constructor
    Square(const Square& sq) : side(sq.side) {}
};

int main() {


    return 0;
}