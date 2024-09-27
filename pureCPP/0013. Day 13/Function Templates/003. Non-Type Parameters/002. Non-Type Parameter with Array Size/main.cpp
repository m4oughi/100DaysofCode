#include <iostream>
using namespace std;

template <typename T, int size>
void printArray(T (&arr)[size]) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.1, 2.2, 3.3};

    printArray(arr);   // Uses size 5
    printArray(arr2);  // Uses size 3

    return 0;
}
