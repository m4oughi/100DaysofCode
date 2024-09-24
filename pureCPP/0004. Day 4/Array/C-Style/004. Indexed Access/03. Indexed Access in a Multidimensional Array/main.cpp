#include <iostream>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int firstRowSecondColumn = matrix[0][1];  // Accessing element in the first row, second column
    matrix[1][2] = 10;  // Modifying element in the second row, third column

}