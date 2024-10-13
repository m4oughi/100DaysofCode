#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int* arr = new int[size]; // dynamically allocate an array

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // No delete[], memory for the array is lost
    return 0; // Memory leak occurs because memory for the array is not deallocated
}
