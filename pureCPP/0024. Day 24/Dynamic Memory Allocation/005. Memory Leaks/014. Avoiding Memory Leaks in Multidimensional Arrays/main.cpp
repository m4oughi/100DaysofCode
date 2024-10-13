#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 4;
    int** arr = new int*[rows]; // dynamically allocate memory for rows

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]; // dynamically allocate memory for columns
    }

    // Deallocate memory for each column
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    // Deallocate memory for rows
    delete[] arr;

    return 0;
}
