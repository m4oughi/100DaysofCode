#include <iostream>
#include <utility>
#include <array>

template <typename T, std::size_t... Indices>
void printArray(const std::array<T, sizeof...(Indices)>& arr, std::index_sequence<Indices...>) {
    ((std::cout << arr[Indices] << " "), ...);
    std::cout << std::endl;
}

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    printArray(arr, std::make_index_sequence<5>{}); // Output: 10 20 30 40 50
    return 0;
}
