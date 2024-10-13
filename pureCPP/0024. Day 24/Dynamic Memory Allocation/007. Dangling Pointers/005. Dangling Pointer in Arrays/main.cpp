#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3] {1, 2, 3}; // dynamically allocate an array

    delete[] arr; // deallocate the array
    cout << "Dangling pointer access: " << arr[0] << endl; // Undefined behavior, array is deallocated

    return 0;
}
