#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {50, 40, 30, 20, 10};
    int target = 35;

    auto lower = std::lower_bound(numbers.begin(), numbers.end(), target, std::greater<int>());
    auto upper = std::upper_bound(numbers.begin(), numbers.end(), target, std::greater<int>());

    std::cout << "Lower bound for " << target << ": " << (lower - numbers.begin()) << "\n";
    std::cout << "Upper bound for " << target << ": " << (upper - numbers.begin()) << "\n";
    return 0;
}
