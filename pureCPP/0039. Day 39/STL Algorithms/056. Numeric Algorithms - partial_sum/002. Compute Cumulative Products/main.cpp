#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<int> result(vec.size());

    std::partial_sum(vec.begin(), vec.end(), result.begin(), std::multiplies<>());

    std::cout << "Cumulative products: ";
    for (int num : result) std::cout << num << " ";
    // Output: Cumulative products: 1 2 6 24
    return 0;
}
