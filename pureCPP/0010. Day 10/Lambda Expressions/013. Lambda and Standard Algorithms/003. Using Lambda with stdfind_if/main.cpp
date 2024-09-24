#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = std::find_if(numbers.begin(), numbers.end(), [](int n) {
        return n > 25;
    });

    if (it != numbers.end()) {
        std::cout << "Found a number greater than 25: " << *it << std::endl; // Outputs: Found a number greater than 25: 30
    }

    return 0;
}
