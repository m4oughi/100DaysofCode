#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> emptyVec;

    if (!emptyVec.empty()) {
        auto minElem = std::min_element(emptyVec.begin(), emptyVec.end());
        auto maxElem = std::max_element(emptyVec.begin(), emptyVec.end());

        std::cout << "Minimum element: " << *minElem << "\n";
        std::cout << "Maximum element: " << *maxElem << "\n";
    } else {
        std::cout << "The container is empty.\n";
    }

    return 0;
}
