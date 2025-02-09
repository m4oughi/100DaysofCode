#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto lb = numbers.lower_bound(35);
    auto ub = numbers.upper_bound(35);

    if (lb != numbers.end()) {
        std::cout << "Lower bound of 35: " << *lb << std::endl;
    } else {
        std::cout << "Lower bound not found.\n";
    }

    if (ub != numbers.end()) {
        std::cout << "Upper bound of 35: " << *ub << std::endl;
    } else {
        std::cout << "Upper bound not found.\n";
    }

    return 0;
}
