#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = {4, 5, 6};

    arr1.swap(arr2);

    std::cout << "Array 1: ";
    for (int i : arr1) std::cout << i << " ";
    std::cout << "\n";

    std::cout << "Array 2: ";
    for (int i : arr2) std::cout << i << " ";

    return 0;
}
