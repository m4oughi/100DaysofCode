#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 10, 10, 10, 15, 20, 25};
    int target = 10;

    auto lower = std::lower_bound(numbers.begin(), numbers.end(), target);
    auto upper = std::upper_bound(numbers.begin(), numbers.end(), target);

    std::cout << "Range of value " << target << " is: ["
              << (lower - numbers.begin()) << ", " << (upper - numbers.begin()) << ")\n";
    return 0;
}
