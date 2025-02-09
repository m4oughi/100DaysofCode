#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 10, 15, 20, 25, 30, 35};

    auto start = numbers.lower_bound(15);
    auto end = numbers.upper_bound(25);

    std::cout << "Elements between 15 and 25: ";
    for (auto it = start; it != end; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
