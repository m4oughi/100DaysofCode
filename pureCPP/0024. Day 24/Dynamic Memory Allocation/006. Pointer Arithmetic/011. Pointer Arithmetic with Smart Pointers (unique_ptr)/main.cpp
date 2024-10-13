#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int[]> arr(new int[5]); // dynamically allocate an array using smart pointers

    // Initialize the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1; // use array index notation (pointer arithmetic is implicit)
    }

    // Output the array elements using pointer arithmetic
    cout << "Smart pointer array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arr.get() + i) << " "; // use pointer arithmetic
    }
    cout << endl;

    // No need to explicitly delete, memory is managed automatically
    return 0;
}
