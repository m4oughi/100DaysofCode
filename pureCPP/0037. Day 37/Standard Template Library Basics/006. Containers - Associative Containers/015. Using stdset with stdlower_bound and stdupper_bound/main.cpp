#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 3, 5, 7, 9, 11};

    auto lower = numbers.lower_bound(4); // First element >= 4
    auto upper = numbers.upper_bound(9); // First element > 9

    std::cout << "Elements between 4 and 9:\n";
    for (auto it = lower; it != upper; ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
