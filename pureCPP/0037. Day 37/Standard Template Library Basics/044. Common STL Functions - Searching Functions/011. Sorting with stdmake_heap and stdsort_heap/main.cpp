#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 9};

    bool hasNegative = std::none_of(vec.begin(), vec.end(), [](int x) { return x < 0; }); // Check if no negatives
    std::cout << (hasNegative ? "No negative numbers" : "There are negative numbers") << "\n";

    return 0;
}
