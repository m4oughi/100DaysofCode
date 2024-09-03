#include <iostream>


struct Point {
    int x, y;
};

int main() {
    Point points[3] = {{1, 2}, {3, 4}, {5, 6}};

    // Summing all x values
    int sumX = 0;
    for (int i = 0; i < 3; ++i) {
        sumX += points[i].x;
    }

    // Output the sum
    std::cout << "Sum of x coordinates: " << sumX << std::endl;
}

