#include <iostream>

int main() {
    struct Point {
        int x;
        int y;
    };

    Point points[3] = {{1, 2}, {3, 4}, {5, 6}};
    Point* ptr = points;  // Pointer to the first element of the array of structs

    // Access struct members using pointer arithmetic
    int x1 = ptr->x;      // 1
    int y1 = ptr->y;      // 2
    ptr++;  // Move pointer to the next struct
    int x2 = ptr->x;      // 3
    int y2 = ptr->y;      // 4

}