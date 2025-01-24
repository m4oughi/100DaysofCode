#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int target = 30;

    if (std::binary_search(numbers.begin(), numbers.end(), target)) {
        std::cout << target << " exists in the vector.\n";
    } else {
        std::cout << target << " does not exist in the vector.\n";
    }

    return 0;
}
