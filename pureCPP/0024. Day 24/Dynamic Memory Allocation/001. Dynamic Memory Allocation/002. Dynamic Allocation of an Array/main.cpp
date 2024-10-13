#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int* arr = new int[size]; // dynamically allocate an array of integers

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // assign values to the array
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // output array elements
    }

    delete[] arr; // deallocate memory for the array
    return 0;
}
