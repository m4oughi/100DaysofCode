#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 5, 15, 30};

    auto result = std::minmax_element(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b;
    });

    std::cout << "Min element: " << *result.first << std::endl;  // Outputs: Min element: 5
    std::cout << "Max element: " << *result.second << std::endl; // Outputs: Max element: 30

    return 0;
}
