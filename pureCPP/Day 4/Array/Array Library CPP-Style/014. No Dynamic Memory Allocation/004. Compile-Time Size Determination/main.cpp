#include <iostream>
#include <array>

template <typename T, size_t N>
void printArraySize(const std::array<T, N>& arr) {
    std::cout << "Array size at compile-time: " << N << std::endl;
}

int main() {
    std::array<int, 10> arr;
    printArraySize(arr);  // Output: Array size at compile-time: 10

    return 0;
}