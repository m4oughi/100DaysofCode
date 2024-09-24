#include <iostream>

struct Point {
    int x, y;
};

int main() {
    int size = 3;
    Point* points = new Point[size];  // Dynamic array of structures

    // Initialize the points
    points[0] = {1, 2};
    points[1] = {3, 4};
    points[2] = {5, 6};

    Point* ptr = points;  // Pointer to the first structure

    // Access structure members using pointer arithmetic
    for (int i = 0; i < size; ++i) {
        std::cout << "Point " << i << ": (" << (ptr + i)->x << ", " << (ptr + i)->y << ")" << std::endl;
    }

    // Calculate the memory difference between two structures
    std::ptrdiff_t diff = &points[1] - &points[0];
    std::cout << "Memory difference between points[1] and points[0]: " << diff * sizeof(Point) << " bytes" << std::endl;

    delete[] points;  // Clean up dynamically allocated memory
    return 0;
}

