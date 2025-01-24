#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 5, 40, 15};

    std::cout << "Minimum element: " << *std::min_element(vec.begin(), vec.end()) << "\n";
    std::cout << "Maximum element: " << *std::max_element(vec.begin(), vec.end()) << "\n";

    return 0;
}
