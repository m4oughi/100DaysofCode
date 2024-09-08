#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {11, 22, 33, 44, 55};

    auto it = std::find(numbers.begin(), numbers.end(), 33);
    if (it != numbers.end()) {
        std::cout << "Element found: " << *it << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
