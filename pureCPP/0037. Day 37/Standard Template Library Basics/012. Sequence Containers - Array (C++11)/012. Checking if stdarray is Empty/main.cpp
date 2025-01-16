#include <iostream>
#include <array>
#include <algorithm>

bool isAllZero(const std::array<int, 5>& arr) {
    return std::all_of(arr.begin(), arr.end(), [](int i) { return i == 0; });
}

int main() {
    std::array<int, 5> numbers = {0, 0, 0, 0, 0};

    std::cout << (isAllZero(numbers) ? "Array is empty" : "Array is not empty") << "\n";

    return 0;
}
