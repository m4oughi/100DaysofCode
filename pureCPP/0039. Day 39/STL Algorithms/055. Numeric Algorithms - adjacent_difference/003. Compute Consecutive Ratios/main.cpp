#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> vec = {2.0, 4.0, 8.0, 16.0};
    std::vector<double> result(vec.size());

    std::adjacent_difference(vec.begin(), vec.end(), result.begin(), std::divides<>());

    std::cout << "Ratios: ";
    for (double num : result) std::cout << num << " ";
    // Output: Ratios: 2 2 2 2
    return 0;
}
