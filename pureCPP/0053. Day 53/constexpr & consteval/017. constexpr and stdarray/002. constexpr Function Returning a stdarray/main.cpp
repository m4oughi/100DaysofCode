#include <iostream>
#include <array>

constexpr std::array<int, 5> generateArray() {
    return {1, 3, 5, 7, 9};
}

int main() {
    constexpr std::array<int, 5> arr = generateArray();
    
    for (int num : arr)
        std::cout << num << " ";
    
    std::cout << '\n';
}
