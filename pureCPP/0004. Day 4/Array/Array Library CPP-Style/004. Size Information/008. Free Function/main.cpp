#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    std::cout << "Size of array using std::size(): " << std::size(arr) << std::endl;  // Output: 5


    return 0;
}