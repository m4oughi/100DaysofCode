#include <iostream>
using namespace std;

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3};
    double arr2[] = {1.1, 2.2, 3.3};

    printArray(arr1, 3);  // Deduces T as int
    printArray(arr2, 3);  // Deduces T as double
    return 0;
}
