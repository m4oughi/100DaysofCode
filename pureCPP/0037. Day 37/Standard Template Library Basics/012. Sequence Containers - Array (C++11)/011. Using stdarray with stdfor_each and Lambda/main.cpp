#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> numbers = {1, 2, 3, 4, 5};

    std::for_each(numbers.begin(), numbers.end(), [](int& n) { n *= 2; }); // Double each element

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
