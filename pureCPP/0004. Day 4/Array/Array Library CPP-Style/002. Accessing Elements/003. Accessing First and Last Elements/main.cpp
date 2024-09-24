#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    std::cout << arr.front() << std::endl; // Access first element: 10
    std::cout << arr.back() << std::endl;  // Access last element: 50

    return 0;
}