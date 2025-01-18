#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = std::find(numbers.cbegin(), numbers.cend(), 30);

    if (it != numbers.cend()) {
        std::cout << "Element found: " << *it << std::endl;
    } else {
        std::cout << "Element not found!" << std::endl;
    }

    return 0;
}
