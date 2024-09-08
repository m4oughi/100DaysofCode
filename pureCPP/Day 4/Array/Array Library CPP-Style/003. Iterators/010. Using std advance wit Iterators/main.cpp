#include <iostream>
#include <array>
#include <iterator>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    auto it = arr.begin();
    std::advance(it, 2);  // Advance iterator to point to the third element

    std::cout << *it << std::endl;  // Output: 3


    return 0;
}