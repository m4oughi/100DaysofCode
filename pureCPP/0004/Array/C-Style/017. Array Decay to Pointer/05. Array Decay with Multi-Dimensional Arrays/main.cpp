#include <iostream>

void print2DArray(int arr[][3], int rows) {  // Array decays to a pointer to an array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";  // Access elements
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    print2DArray(arr, 2);  // Array decays to a pointer to an array of 3 ints
    // Outputs:
    // 1 2 3
    // 4 5 6
}
