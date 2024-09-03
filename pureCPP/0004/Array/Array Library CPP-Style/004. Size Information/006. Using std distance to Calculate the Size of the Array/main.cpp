#include <iostream>
#include <array>
#include <iterator>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    size_t size = std::distance(arr.begin(), arr.end());
    std::cout << "Size of array using iterators: " << size << std::endl;  // Output: 5


    return 0;
}