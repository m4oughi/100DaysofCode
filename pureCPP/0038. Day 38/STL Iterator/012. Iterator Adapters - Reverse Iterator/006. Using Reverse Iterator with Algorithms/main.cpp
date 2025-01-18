#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto maxElement = std::max_element(numbers.rbegin(), numbers.rend());
    std::cout << "Maximum element in reverse order: " << *maxElement << std::endl;

    return 0;
}
