#include <iostream>

struct Color {
    unsigned char red : 3;
    unsigned char green : 3;
    unsigned char blue : 2;
};

int main() {
    Color color;
    color.red = 5;    // 101 in binary
    color.green = 6;  // 110 in binary
    color.blue = 3;   // 11 in binary

    std::cout << "Red: " << (int)color.red << ", Green: " << (int)color.green << ", Blue: " << (int)color.blue << std::endl;
}
