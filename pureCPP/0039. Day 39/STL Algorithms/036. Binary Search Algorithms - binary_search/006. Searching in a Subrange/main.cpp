#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50, 60};
    int target = 40;

    if (std::binary_search(numbers.begin() + 2, numbers.begin() + 5, target)) {
        std::cout << target << " exists in the subrange.\n";
    } else {
        std::cout << target << " does not exist in the subrange.\n";
    }

    return 0;
}
