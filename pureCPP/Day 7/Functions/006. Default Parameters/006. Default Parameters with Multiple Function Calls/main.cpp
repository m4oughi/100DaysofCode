#include <iostream>

// Function declaration with multiple default parameters
void printRectangle(int width = 5, int height = 10);

int main() {
    printRectangle();              // Uses both default parameters
    printRectangle(8);             // Uses default height
    printRectangle(7, 15);         // No default values used
    return 0;
}

// Function definition with multiple default parameters
void printRectangle(int width, int height) {
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
}
