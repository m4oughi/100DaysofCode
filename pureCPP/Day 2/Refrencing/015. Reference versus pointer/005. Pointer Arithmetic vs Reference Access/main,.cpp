#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4};

    int* ptr = arr;  // Pointer to the first element of the array
    int& ref = arr[0];  // Reference to the first element

    std::cout << "Pointer arithmetic: " << *(ptr + 1) << std::endl;  // Accessing second element
    std::cout << "Reference access: " << ref << std::endl;  // Accessing first element

    return 0;
}
