#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numbers = {2, 4, 6, 8, 10};

    for (int& num : numbers) {
        num *= 2;
    }

    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
