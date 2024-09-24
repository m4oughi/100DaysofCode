#include <iostream>

int main() {
    const int arr[] = {5, 10, 15, 20};
    const int* ptr = arr;

    std::cout << *(ptr + 2) << std::endl; // Prints 15
}
