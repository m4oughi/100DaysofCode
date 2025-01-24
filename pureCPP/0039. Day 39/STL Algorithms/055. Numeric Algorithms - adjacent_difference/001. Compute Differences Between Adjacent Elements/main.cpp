#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};
    std::vector<int> result(vec.size());

    std::adjacent_difference(vec.begin(), vec.end(), result.begin());

    std::cout << "Differences: ";
    for (int num : result) std::cout << num << " ";
    // Output: Differences: 10 10 10 10
    return 0;
}
