#include <iostream>
#include <array>

constexpr std::array<int, 10> generateTable() {
    std::array<int, 10> arr{};
    for (int i = 0; i < 10; ++i)
        arr[i] = i * i;
    return arr;
}

int main() {
    constexpr auto table = generateTable();
    
    std::cout << "Look-up table values: ";
    for (int value : table) std::cout << value << " ";
}
