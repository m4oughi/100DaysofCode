#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    int** arr = new int*[rows]; // allocate memory for rows

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]; // allocate memory for columns in each row
    }

    // Assign values and print the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i + j;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i]; // delete each row
    }
    delete[] arr; // delete the array of row pointers

    return 0;
}
