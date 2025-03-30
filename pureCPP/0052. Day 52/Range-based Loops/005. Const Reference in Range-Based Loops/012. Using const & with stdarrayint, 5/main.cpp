#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numbers = {10, 20, 30, 40, 50};

    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
