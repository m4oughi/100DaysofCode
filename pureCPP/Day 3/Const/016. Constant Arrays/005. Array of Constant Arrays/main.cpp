#include <iostream>

int main() {
    const int arr1[] = {1, 2, 3};
    const int arr2[] = {4, 5, 6};
    const int* const arr[] = {arr1, arr2};

    for (const int* a : arr) {
        for (int i = 0; i < 3; ++i) {
            std::cout << a[i] << " "; // Prints 1 2 3 4 5 6
        }
    }
}
