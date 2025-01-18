#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    int target = 30;
    bool found = std::binary_search(numbers.begin(), numbers.end(), target);

    if (found) {
        std::cout << target << " is found in the vector." << std::endl;
    } else {
        std::cout << target << " is not in the vector." << std::endl;
    }

    return 0;
}
