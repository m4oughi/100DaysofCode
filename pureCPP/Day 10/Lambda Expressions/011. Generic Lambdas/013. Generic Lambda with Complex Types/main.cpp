#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    auto printWithIndex = [](const auto& container) {
        for (auto it = container.begin(); it != container.end(); ++it) {
            std::cout << std::distance(container.begin(), it) << ": " << *it << std::endl;
        }
    };

    std::vector<int> vec = {10, 20, 30, 40};
    printWithIndex(vec); // Outputs: 0: 10, 1: 20, 2: 30, 3: 40

    return 0;
}
