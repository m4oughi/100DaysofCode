#include <iostream>

int main() {
    int arr[4] = {1, 2, 3, 4};

    int (*ptrToArray)[4] = &arr;  // Pointer to the entire array
    int* ptrToFirstElement = arr;  // Pointer to the first element of the array

    // Accessing elements via pointer to the entire array
    std::cout << "First element using ptrToArray: " << (*ptrToArray)[0] << std::endl;  // Output: 1

    // Accessing elements via pointer to the first element
    std::cout << "First element using ptrToFirstElement: " << *ptrToFirstElement << std::endl;  // Output: 1

    return 0;
}
