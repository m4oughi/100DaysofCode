#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 3, 5, 7, 9};

    std::cout << "Reversed deque: ";
    for (auto it = std::rbegin(numbers); it != std::rend(numbers); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
