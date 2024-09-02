#include <iostream>

// Define a simple struct
struct Point {
    int x, y;
};

int main() {
    // Dynamically allocate memory for an array of Point structs
    Point* points = new Point[3];

    // Initialize the struct array
    for (int i = 0; i < 3; ++i) {
        points[i].x = i;
        points[i].y = i * 2;
    }

    // Print the points
    for (int i = 0; i < 3; ++i) {
        std::cout << "Point " << i << ": (" << points[i].x << ", " << points[i].y << ")" << std::endl;
    }

    // Deallocate memory
    delete[] points;

    return 0;
}
