#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {50, 40, 30, 20, 10};
    int target = 30;

    if (std::binary_search(numbers.begin(), numbers.end(), target, std::greater<int>())) {
        std::cout << target << " exists in the descending vector.\n";
    } else {
        std::cout << target << " does not exist in the descending vector.\n";
    }

    return 0;
}
