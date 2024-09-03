#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;

    arr[0] = 10;  // Assign to the first element
    arr[1] = 20;  // Assign to the second element

    std::cout << arr[0] << " " << arr[1] << std::endl;  // Output: 10 20


    return 0;
}