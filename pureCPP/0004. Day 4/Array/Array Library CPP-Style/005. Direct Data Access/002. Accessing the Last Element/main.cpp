#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    int last = arr.back();
    std::cout << "Last element: " << last << std::endl;  // Output: Last element: 50


    return 0;
}