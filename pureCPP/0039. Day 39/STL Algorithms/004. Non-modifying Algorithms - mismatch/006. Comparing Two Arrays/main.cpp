#include <iostream>
#include <algorithm>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 0, 4, 5};

    auto result = std::mismatch(std::begin(arr1), std::end(arr1), std::begin(arr2));

    if (result.first != std::end(arr1)) {
        std::cout << "Mismatch found at index " << (result.first - std::begin(arr1)) << ": "
                  << *result.first << " (arr1) vs " << *result.second << " (arr2)." << std::endl;
    } else {
        std::cout << "No mismatch found." << std::endl;
    }

    return 0;
}
