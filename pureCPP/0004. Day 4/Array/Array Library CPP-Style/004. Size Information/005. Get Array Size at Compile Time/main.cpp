#include <iostream>
#include <array>
#include <tuple>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    constexpr size_t arr_size = std::tuple_size<decltype(arr)>::value;
    std::cout << "Size of array at compile time: " << arr_size << std::endl;  // Output: 5


    return 0;
}