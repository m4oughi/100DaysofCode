#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    std::cout << "Reverse iteration: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
