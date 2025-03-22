#include <iostream>
#include <vector>
#include <array>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::array<int, 3> arr = {10, 20, 30};

    std::cout << "Vector size: " << std::size(vec) << "\n";
    std::cout << "Array size: " << std::size(arr) << "\n";

    if (!std::empty(vec)) {
        std::cout << "Vector is not empty\n";
    }

    int* arrData = std::data(arr);  // Direct pointer to array storage
    std::cout << "First element in array: " << *arrData << "\n";

    return 0;
}
