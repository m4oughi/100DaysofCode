#include <iostream>
#include <array>

template <typename T, std::size_t N>
void printArraySize(const std::array<T, N>& arr) {
    std::cout << "Size of array in template: " << N << std::endl;
}


int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    printArraySize(arr);  // Output: Size of array in template: 5

    return 0;
}