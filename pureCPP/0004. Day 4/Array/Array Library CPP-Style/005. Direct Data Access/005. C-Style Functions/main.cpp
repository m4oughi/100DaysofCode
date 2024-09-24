#include <iostream>
#include <array>

void printArray(int* arr, std::size_t size) {
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    printArray(arr.data(), arr.size());  // Output: 10 20 30 40 50


    return 0;
}