#include <iostream>
using namespace std;

int main() {
    int** matrix = nullptr; // null pointer for 2D array

    // Dynamically allocate memory for a 2D array
    matrix = new int*[3];
    for (int i = 0; i < 3; i++) {
        matrix[i] = new int[3]{1, 2, 3};
    }

    // Access matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr; // set to null after deallocation

    return 0;
}
