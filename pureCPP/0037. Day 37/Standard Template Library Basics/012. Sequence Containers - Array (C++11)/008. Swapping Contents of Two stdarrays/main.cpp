#include <iostream>
#include <array>

int main() {
    std::array<int, 3> array1 = {1, 2, 3};
    std::array<int, 3> array2 = {4, 5, 6};

    array1.swap(array2); // Swap contents of array1 and array2

    std::cout << "Array 1: ";
    for (int num : array1) {
        std::cout << num << " ";
    }

    std::cout << "\nArray 2: ";
    for (int num : array2) {
        std::cout << num << " ";
    }

    return 0;
}
