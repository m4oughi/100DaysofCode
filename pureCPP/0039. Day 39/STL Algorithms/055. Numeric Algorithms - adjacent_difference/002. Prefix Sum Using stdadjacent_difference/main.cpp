#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {10, 10, 10, 10};
    std::vector<int> result(vec.size());

    std::adjacent_difference(vec.begin(), vec.end(), result.begin(), std::plus<>());

    std::cout << "Prefix sums: ";
    for (int num : result) std::cout << num << " ";
    // Output: Prefix sums: 10 20 30 40
    return 0;
}
