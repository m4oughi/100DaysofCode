#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 5, 20, 1, 30};
    auto minIt = std::min_element(numbers.begin(), numbers.end());
    auto maxIt = std::max_element(numbers.begin(), numbers.end());

    std::cout << "Min: " << *minIt << ", Max: " << *maxIt << std::endl;
    return 0;
}
