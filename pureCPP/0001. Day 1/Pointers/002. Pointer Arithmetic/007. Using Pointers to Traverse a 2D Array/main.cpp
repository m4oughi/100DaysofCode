#include <iostream>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int* ptr = &matrix[0][0];  // Pointer to the first element of the 2D array

    // Traverse the 2D array using pointer arithmetic
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int value = *(ptr + i * 3 + j);  // Calculate the offset manually
            // Do something with value
        }
    }
}