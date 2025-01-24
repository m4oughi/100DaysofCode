#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 15, 40, 50};
    std::sort(numbers.begin(), numbers.end());

    int target = 15;

    if (std::binary_search(numbers.begin(), numbers.end(), target)) {
        std::cout << target << " exists in the sorted vector.\n";
    } else {
        std::cout << target << " does not exist in the sorted vector.\n";
    }

    return 0;
}
