#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {25, 10, 35, 50, 5};

    auto result = std::minmax_element(vec.begin(), vec.end());
    std::cout << "Minimum: " << *result.first << "\n";
    std::cout << "Maximum: " << *result.second << "\n";

    return 0;
}
