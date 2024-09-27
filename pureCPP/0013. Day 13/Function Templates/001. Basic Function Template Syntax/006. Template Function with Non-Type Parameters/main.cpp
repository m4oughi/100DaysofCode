#include <iostream>
using namespace std;

template <typename T, int size>
T multiplyArray(T (&arr)[size], T multiplier) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= multiplier;
    }
    return arr[size - 1];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    multiplyArray(arr, 2);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
