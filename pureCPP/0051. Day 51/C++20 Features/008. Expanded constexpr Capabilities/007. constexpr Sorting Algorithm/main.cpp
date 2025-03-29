#include <iostream>
#include <array>

constexpr void bubbleSort(std::array<int, 5>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size() - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

constexpr std::array<int, 5> sortedArray() {
    std::array<int, 5> arr{5, 3, 4, 1, 2};
    bubbleSort(arr);
    return arr;
}

int main() {
    constexpr auto arr = sortedArray();
    std::cout << "First element after sorting: " << arr[0] << "\n";
}
