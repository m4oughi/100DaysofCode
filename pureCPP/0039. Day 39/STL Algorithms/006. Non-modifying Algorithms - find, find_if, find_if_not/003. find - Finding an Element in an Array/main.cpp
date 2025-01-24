#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;

    auto it = std::find(std::begin(arr), std::end(arr), target);

    if (it != std::end(arr)) {
        std::cout << "Element " << target << " found at index: " << (it - std::begin(arr)) << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
