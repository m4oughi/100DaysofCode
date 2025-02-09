#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto lb = numbers.lower_bound(30);
    auto ub = numbers.upper_bound(30);

    std::cout << "Lower bound of 30: " << *lb << std::endl;
    std::cout << "Upper bound of 30: " << *ub << std::endl;

    return 0;
}
