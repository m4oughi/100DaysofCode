#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    auto it = std::find(numbers.begin(), numbers.end(), 30);

    if (it != numbers.end()) {
        std::cout << "Found 30 at index: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "30 not found." << std::endl;
    }
    return 0;
}
