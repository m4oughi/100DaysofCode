#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 20, 20, 30, 40, 50};
    int target = 20;

    auto it = std::upper_bound(numbers.begin(), numbers.end(), target);

    std::cout << "First position after all occurrences of " << target << ": "
              << (it - numbers.begin()) << "\n";
    return 0;
}
