#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5};
    int result[6];

    auto new_end = std::remove_copy(arr, arr + 6, result, 2);

    std::cout << "Array after remove_copy (excluding 2): ";
    for (int* it = result; it != new_end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
