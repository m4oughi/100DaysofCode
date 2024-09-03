#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    auto start = arr.begin();
    auto end = arr.end();

    std::cout << std::distance(start, end) << std::endl;  // Output: 5


    return 0;
}