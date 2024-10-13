#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int* arr = new int[size]; // dynamically allocate memory for an array

    for (int i = 0; i < size; i++) {
        arr[i] = i * 2; // assign values to the array
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // output the array elements
    }

    delete[] arr; // deallocate memory for the array
    return 0;
}
