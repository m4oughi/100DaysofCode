#include <iostream>
#include <array>
#include <iterator>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    auto it = std::next(arr.begin(), 3);  // Move iterator to the fourth element
    std::cout << *it << std::endl;  // Output: 4

    it = std::prev(it, 2);  // Move iterator back to the second element
    std::cout << *it << std::endl;  // Output: 2


    return 0;
}