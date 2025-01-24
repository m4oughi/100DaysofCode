#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<int> result(vec.size());

    std::partial_sum(vec.begin(), vec.end(), result.begin(), std::bit_xor<>());

    std::cout << "Prefix XOR: ";
    for (int num : result) std::cout << num << " ";
    // Output: Prefix XOR: 1 3 0 4
    return 0;
}
