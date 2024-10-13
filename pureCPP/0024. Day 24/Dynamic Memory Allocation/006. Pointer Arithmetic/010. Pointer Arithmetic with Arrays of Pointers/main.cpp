#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int* arr[] = {&a, &b, &c}; // array of pointers

    cout << "Array of pointers using pointer arithmetic: ";
    for (int i = 0; i < 3; i++) {
        cout << *(arr[i]) << " "; // dereferencing the pointers
    }
    cout << endl;

    return 0;
}
