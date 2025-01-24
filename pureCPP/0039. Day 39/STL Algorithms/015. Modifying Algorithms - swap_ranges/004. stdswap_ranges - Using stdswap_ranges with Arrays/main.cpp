#include <iostream>
#include <algorithm>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};

    std::swap_ranges(std::begin(arr1), std::end(arr1), std::begin(arr2));

    std::cout << "arr1 after swap: ";
    for (int num : arr1) {
        std::cout << num << " ";
    }
    std::cout << "\narr2 after swap: ";
    for (int num : arr2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
