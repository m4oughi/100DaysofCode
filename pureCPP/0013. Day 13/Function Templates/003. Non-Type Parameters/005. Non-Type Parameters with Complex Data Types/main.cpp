#include <iostream>
using namespace std;

template <typename T, int rows, int cols>
void printMatrix(T (&matrix)[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printMatrix(matrix);  // Uses rows=2, cols=3
    return 0;
}
