#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};
    int target = 30;

    if (std::binary_search(numbers.begin(), numbers.end(), target)) {
        std::cout << target << " exists in the set.\n";
    } else {
        std::cout << target << " does not exist in the set.\n";
    }

    return 0;
}
