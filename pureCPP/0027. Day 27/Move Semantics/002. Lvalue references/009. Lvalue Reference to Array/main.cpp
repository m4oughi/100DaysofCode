#include <iostream>

int main() {
    int arr[] = {1, 2, 3};
    int (&ref)[3] = arr;  // Lvalue reference to an array

    ref[0] = 10;  // Modifies the original array
    std::cout << arr[0];  // Prints 10

    return 0;
}