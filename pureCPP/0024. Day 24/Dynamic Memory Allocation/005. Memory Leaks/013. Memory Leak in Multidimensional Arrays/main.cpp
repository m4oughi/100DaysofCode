#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 4;
    int** arr = new int*[rows]; // dynamically allocate memory for rows

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]; // dynamically allocate memory for columns
    }

    // No delete[] for either rows or columns, causing a memory leak

    return 0;
}
