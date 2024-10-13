#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]; // dynamically allocate an array of 5 integers

    // Initialize the array
    for (int i = 0; i < 5; i++) {
        *(arr + i) = i * 10; // using pointer arithmetic to assign values
    }

    // Output the values
    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " "; // using pointer arithmetic to access values
    }
    cout << endl;

    delete[] arr; // deallocate the memory
    return 0;
}
