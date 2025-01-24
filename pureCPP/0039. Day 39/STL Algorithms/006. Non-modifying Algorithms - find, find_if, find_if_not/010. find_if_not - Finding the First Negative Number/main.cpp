#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, -5, 30, -10};

    auto it = std::find_if_not(numbers.begin(), numbers.end(), [](int num) { return num > 0; });

    if (it != numbers.end()) {
        std::cout << "First non-positive number found: " << *it << std::endl;
    } else {
        std::cout << "All numbers are positive." << std::endl;
    }

    return 0;
}
