#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int lower_bound_value = 15;
    int upper_bound_value = 35;

    auto lower = std::lower_bound(numbers.begin(), numbers.end(), lower_bound_value);
    auto upper = std::upper_bound(numbers.begin(), numbers.end(), upper_bound_value);

    if (lower != upper) {
        std::cout << "Values exist within the range [" << lower_bound_value << ", " << upper_bound_value << "].\n";
    } else {
        std::cout << "No values found in the specified range.\n";
    }
    return 0;
}
