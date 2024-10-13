#include <iostream>
using namespace std;

int main() {
    int* arr = nullptr; // null pointer for array

    // Dynamically allocate memory for array
    arr = new int[5] {1, 2, 3, 4, 5};
    
    // Access elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // free memory
    return 0;
}
