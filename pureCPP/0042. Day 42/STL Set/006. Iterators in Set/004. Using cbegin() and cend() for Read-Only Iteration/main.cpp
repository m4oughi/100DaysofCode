#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {100, 200, 300, 400};

    std::cout << "Set elements: ";
    for (auto it = numbers.cbegin(); it != numbers.cend(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
