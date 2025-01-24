#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int targets[] = {35, 40, 45};

    auto it = std::find_first_of(std::begin(arr), std::end(arr), std::begin(targets), std::end(targets));

    if (it != std::end(arr)) {
        std::cout << "First matching element found: " << *it << std::endl;
    } else {
        std::cout << "No matching elements found." << std::endl;
    }

    return 0;
}
