#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numbers;
    numbers.fill(7); // Fill all elements with 7

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
