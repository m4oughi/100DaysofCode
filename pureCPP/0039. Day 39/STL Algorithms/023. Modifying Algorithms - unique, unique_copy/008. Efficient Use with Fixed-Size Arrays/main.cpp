#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    auto new_end = std::unique(arr, arr + size);

    std::cout << "Array after std::unique: ";
    for (int* it = arr; it != new_end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
