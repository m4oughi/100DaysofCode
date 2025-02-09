#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 15, 25, 35, 45};

    auto ub = numbers.upper_bound(25);
    
    if (ub != numbers.end()) {
        std::cout << "Upper bound of 25: " << *ub << std::endl;
    } else {
        std::cout << "No upper bound found.\n";
    }
    return 0;
}
