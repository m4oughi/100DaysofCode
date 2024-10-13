#include <iostream>
#include <memory> // for smart pointers
using namespace std;

int main() {
    int size = 5;
    unique_ptr<int[]> arr(new int[size]); // use unique_ptr to manage dynamic array

    for (int i = 0; i < size; i++) {
        arr[i] = i * 2; // assign values
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // output array elements
    }
    cout << endl;

    // No need to explicitly delete, memory will be automatically deallocated
    return 0;
}
