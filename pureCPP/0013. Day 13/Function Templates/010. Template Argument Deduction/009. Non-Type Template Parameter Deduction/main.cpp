#include <iostream>
using namespace std;

template <typename T, int size>
void printFixedArray(T (&arr)[size]) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    printFixedArray(arr);  // Deduces T as int, size as 4
    return 0;
}
