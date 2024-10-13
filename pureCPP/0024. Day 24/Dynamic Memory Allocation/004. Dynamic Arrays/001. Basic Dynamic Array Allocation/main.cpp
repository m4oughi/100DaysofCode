#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int* arr = new int[size]; // dynamically allocate an array

    // Assign values to the array
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Output the array elements
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // deallocate memory
    return 0;
}
