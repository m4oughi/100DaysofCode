#include <iostream>

int main() {
    constexpr int arr[] = {3, 1, 4, 1, 5};

    std::cout << "Constexpr array elements: ";
    for (auto it = std::begin(arr); it != std::end(arr); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
