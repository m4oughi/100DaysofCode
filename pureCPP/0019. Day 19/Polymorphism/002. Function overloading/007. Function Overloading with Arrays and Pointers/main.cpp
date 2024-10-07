#include <iostream>
using namespace std;

void process(int arr[], int size) {
    cout << "Processing array of integers: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void process(int* ptr, int size) {
    cout << "Processing integer pointer: ";
    for (int i = 0; i < size; i++)
        cout << *(ptr + i) << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    process(arr, 5);  // Calls array version

    int* ptr = arr;
    process(ptr, 5);  // Calls pointer version

    return 0;
}
