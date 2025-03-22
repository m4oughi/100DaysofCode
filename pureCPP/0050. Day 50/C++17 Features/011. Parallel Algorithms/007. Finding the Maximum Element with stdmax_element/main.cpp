#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> data = {10, 5, 20, 8, 15};

    auto max_element = std::max_element(std::execution::par,
                                        data.begin(), data.end());

    std::cout << "Maximum element: " << *max_element << '\n';

    return 0;
}
