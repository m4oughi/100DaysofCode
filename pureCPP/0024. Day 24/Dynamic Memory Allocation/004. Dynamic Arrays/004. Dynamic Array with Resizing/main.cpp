#include <iostream>
using namespace std;

int* resizeArray(int* arr, int oldSize, int newSize) {
    int* newArr = new int[newSize]; // allocate new array

    // Copy elements from old array to new array
    for (int i = 0; i < oldSize; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr; // deallocate old array
    return newArr; // return new array
}

int main() {
    int size = 5;
    int* arr = new int[size];

    // Assign initial values
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Resize array to hold more elements
    arr = resizeArray(arr, size, 10);

    // Assign values to the new slots
    for (int i = size; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Output the resized array
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // deallocate memory
    return 0;
}
