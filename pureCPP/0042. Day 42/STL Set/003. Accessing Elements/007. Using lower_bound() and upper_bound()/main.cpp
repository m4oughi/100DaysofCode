#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto lb = numbers.lower_bound(25);
    auto ub = numbers.upper_bound(25);

    std::cout << "Lower bound of 25: " << (lb != numbers.end() ? std::to_string(*lb) : "Not found") << std::endl;
    std::cout << "Upper bound of 25: " << (ub != numbers.end() ? std::to_string(*ub) : "Not found") << std::endl;
    return 0;
}
