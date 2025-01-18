#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Reverse iteration: ";
    for (auto it = numbers.end() - 1; it >= numbers.begin(); --it) {
        std::cout << *it << " ";
    }

    return 0;
}
