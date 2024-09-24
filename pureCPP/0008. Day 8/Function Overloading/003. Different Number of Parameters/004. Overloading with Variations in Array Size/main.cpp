#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Array of size " << size << ": ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(int arr[], int size1, int size2) {
    cout << "Array with dimensions " << size1 << "x" << size2 << ": ";
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            cout << arr[i * size2 + j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 4, 5, 6};
    
    printArray(arr1, 3);              // Calls printArray(int[], int)
    printArray(arr2, 2, 3);           // Calls printArray(int[], int, int)
    
    return 0;
}
