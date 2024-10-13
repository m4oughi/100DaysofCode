#include <iostream>
using namespace std;

int main() {
    int x = 3, y = 4, z = 5;
    int*** arr = new int**[x]; // allocate memory for x

    for (int i = 0; i < x; i++) {
        arr[i] = new int*[y]; // allocate memory for y
        for (int j = 0; j < y; j++) {
            arr[i][j] = new int[z]; // allocate memory for z
        }
    }

    // Assign values and print the 3D array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arr[i][j][k] = i + j + k;
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] arr[i][j]; // delete each layer of z
        }
        delete[] arr[i]; // delete each row of y
    }
    delete[] arr; // delete the array of x pointers

    return 0;
}
