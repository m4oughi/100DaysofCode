#include <iostream>

// Function declaration with default parameter returning value
int calculateArea(int width = 5, int height = 10);

int main() {
    std::cout << "Area: " << calculateArea() << std::endl;        // Uses both default parameters
    std::cout << "Area: " << calculateArea(8) << std::endl;       // Uses default height
    std::cout << "Area: " << calculateArea(7, 15) << std::endl;   // No defaults used
    return 0;
}

// Function definition with default parameters
int calculateArea(int width, int height) {
    return width * height;
}
