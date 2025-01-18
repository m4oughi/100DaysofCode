#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25};

    auto it = std::find(numbers.begin(), numbers.end(), 15);

    if (it != numbers.end()) {
        std::cout << "Found: " << *it << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
