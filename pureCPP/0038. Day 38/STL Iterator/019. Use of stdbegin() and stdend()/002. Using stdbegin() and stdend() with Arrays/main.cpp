#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    std::cout << "Array elements: ";
    for (auto it = std::begin(arr); it != std::end(arr); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
