#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    arr[1] = 100; // Modify second element
    std::cout << arr[1] << std::endl; // Output: 100

    return 0;
}