#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> factorials(vec.size());

    std::partial_sum(vec.begin(), vec.end(), factorials.begin(), std::multiplies<>());

    std::cout << "Factorials: ";
    for (int num : factorials) std::cout << num << " ";
    // Output: Factorials: 1 2 6 24 120
    return 0;
}
