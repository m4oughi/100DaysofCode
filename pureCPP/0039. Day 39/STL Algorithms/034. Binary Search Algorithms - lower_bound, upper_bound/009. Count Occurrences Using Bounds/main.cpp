#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 20, 20, 30, 40};
    int target = 20;

    auto lower = std::lower_bound(numbers.begin(), numbers.end(), target);
    auto upper = std::upper_bound(numbers.begin(), numbers.end(), target);

    std::cout << "Count of " << target << ": " << (upper - lower) << "\n";
    return 0;
}
