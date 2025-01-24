#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    auto new_end = std::remove(arr, arr + size, 3);

    std::cout << "Array after remove: ";
    for (int* it = arr; it != new_end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
