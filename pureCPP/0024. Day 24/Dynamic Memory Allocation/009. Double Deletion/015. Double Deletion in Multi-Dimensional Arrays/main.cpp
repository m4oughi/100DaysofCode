#include <iostream>
using namespace std;

int main() {
    int** matrix = new int*[3]; // dynamically allocate 2D array

    for (int i = 0; i < 3; i++) {
        matrix[i] = new int[3]; // allocate rows
    }

    delete[] matrix[0]; // first deletion of one row
    delete[] matrix[0]; // second deletion of the same row (Error: undefined behavior)

    for (int i = 1; i < 3; i++) {
        delete[] matrix[i]; // cleanup remaining rows
    }
    delete[] matrix; // delete outer array

    return 0;
}
