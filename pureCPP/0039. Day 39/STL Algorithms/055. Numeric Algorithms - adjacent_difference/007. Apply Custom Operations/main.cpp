#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 4, 7, 11};
    std::vector<int> differences(vec.size());

    std::adjacent_difference(vec.begin(), vec.end(), differences.begin(),
        [](int x, int y) { return (x - y) * (x - y); });

    std::cout << "Squared differences: ";
    for (size_t i = 1; i < differences.size(); ++i) { // Skip the first element
        std::cout << differences[i] << " ";
    }
    // Output: Squared differences: 1 4 9 16
    return 0;
}
