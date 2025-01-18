#include <iostream>
#include <vector>

int main() {
    const std::vector<int> numbers = {10, 20, 30, 40};

    std::cout << "Const vector elements: ";
    for (auto it = std::begin(numbers); it != std::end(numbers); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
