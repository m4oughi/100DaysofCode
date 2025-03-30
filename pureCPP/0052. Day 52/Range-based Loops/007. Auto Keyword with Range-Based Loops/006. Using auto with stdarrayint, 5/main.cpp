#include <iostream>
#include <array>

int main() {
    std::array<int, 5> numbers = {5, 10, 15, 20, 25};

    for (auto num : numbers) { // 'auto' deduces int
        std::cout << num << " ";
    }

    return 0;
}
