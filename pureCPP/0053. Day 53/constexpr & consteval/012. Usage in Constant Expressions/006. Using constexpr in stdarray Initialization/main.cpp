#include <iostream>
#include <array>

constexpr int getValue(int index) {
    return index * index;
}

int main() {
    constexpr std::array<int, 5> arr = { getValue(0), getValue(1), getValue(2), getValue(3), getValue(4) };
    
    std::cout << "Array values: ";
    for (int val : arr) std::cout << val << " ";
}
