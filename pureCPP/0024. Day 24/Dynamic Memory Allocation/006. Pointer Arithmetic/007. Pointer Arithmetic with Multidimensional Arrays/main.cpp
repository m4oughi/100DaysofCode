#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int* ptr = &arr[0][0]; // pointer to the first element of the 2D array

    cout << "Multidimensional array elements using pointer arithmetic: ";
    for (int i = 0; i < 6; i++) {
        cout << *(ptr + i) << " "; // access elements in row-major order
    }
    cout << endl;

    return 0;
}
