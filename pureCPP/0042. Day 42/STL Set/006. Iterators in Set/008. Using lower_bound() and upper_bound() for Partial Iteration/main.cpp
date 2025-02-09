#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50, 60};

    auto start = numbers.lower_bound(25); // First element ≥ 25
    auto end = numbers.upper_bound(50);   // First element > 50

    std::cout << "Elements in range [25, 50]: ";
    for (auto it = start; it != end; ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
