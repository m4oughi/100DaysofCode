#include <iostream>
#include <array>

int main() {
    std::array<int, 4> numbers = {1, 2, 3, 4};

    numbers[0] = 10;      // Modify the first element
    numbers.at(2) = 30;   // Modify using at()

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
