#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Reverse iteration through deque: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
