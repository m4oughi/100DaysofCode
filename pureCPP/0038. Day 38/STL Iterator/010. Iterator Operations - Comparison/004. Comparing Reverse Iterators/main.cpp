#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    auto rbegin = numbers.rbegin();
    auto rend = numbers.rend();

    if (rbegin < rend) {
        std::cout << "Reverse iterators comparison: rbegin is before rend." << std::endl;
    }

    std::cout << "Reverse iteration: ";
    for (auto it = rbegin; it != rend; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
