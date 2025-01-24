#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};
    int target = 6;

    auto lower = std::lower_bound(numbers.begin(), numbers.end(), target);
    auto upper = std::upper_bound(numbers.begin(), numbers.end(), target);

    std::cout << "Lower bound for " << target << ": " << (lower - numbers.begin()) << "\n";
    std::cout << "Upper bound for " << target << ": " << (upper - numbers.begin()) << "\n";
    return 0;
}
