#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 25, 30, 45, 50};

    auto it = std::find_if(numbers.begin(), numbers.end(), [](int n) { return n > 40; });

    if (it != numbers.end()) {
        std::cout << "First number greater than 40: " << *it << "\n";
    } else {
        std::cout << "No number greater than 40 found.\n";
    }

    return 0;
}
