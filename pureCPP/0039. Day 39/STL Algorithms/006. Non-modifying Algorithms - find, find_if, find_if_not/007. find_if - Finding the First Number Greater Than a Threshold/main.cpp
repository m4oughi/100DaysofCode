#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = std::find_if(numbers.begin(), numbers.end(), [](int num) { return num > 25; });

    if (it != numbers.end()) {
        std::cout << "First number greater than 25: " << *it << std::endl;
    } else {
        std::cout << "No number greater than 25 found." << std::endl;
    }

    return 0;
}
