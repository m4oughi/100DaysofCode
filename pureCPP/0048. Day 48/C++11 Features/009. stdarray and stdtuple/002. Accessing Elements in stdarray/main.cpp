#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {10, 20, 30};

    std::cout << "First element: " << arr[0] << std::endl;
    std::cout << "Second element: " << arr.at(1) << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;

    return 0;
}
