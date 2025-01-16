#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {5, 10, 15, 20};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
