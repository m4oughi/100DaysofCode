#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result(vec.size());

    std::partial_sum(vec.begin(), vec.end(), result.begin());

    std::cout << "Cumulative sums: ";
    for (int num : result) std::cout << num << " ";
    // Output: Cumulative sums: 1 3 6 10 15
    return 0;
}
