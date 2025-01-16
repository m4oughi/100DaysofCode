#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto range = numbers.equal_range(30);

    if (range.first != numbers.end()) {
        std::cout << "Lower bound: " << *range.first << "\n";
    }
    if (range.second != numbers.end()) {
        std::cout << "Upper bound: " << *range.second << "\n";
    }
    return 0;
}
