#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    std::cout << "Element at index 2: " << arr.at(2) << "\n";

    // Uncommenting the line below will throw an out_of_range exception
    // std::cout << arr.at(10) << "\n";

    return 0;
}
