#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    int first = arr.front();
    std::cout << "First element: " << first << std::endl;  // Output: First element: 10


    return 0;
}