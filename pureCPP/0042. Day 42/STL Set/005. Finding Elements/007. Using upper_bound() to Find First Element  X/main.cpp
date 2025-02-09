#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto ub = numbers.upper_bound(30);
    if (ub != numbers.end()) {
        std::cout << "Upper bound of 30: " << *ub << std::endl;
    } else {
        std::cout << "No upper bound found.\n";
    }
    return 0;
}
