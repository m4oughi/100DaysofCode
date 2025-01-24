#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    int xor_result = std::reduce(vec.begin(), vec.end(), 0, std::bit_xor<>());

    std::cout << "Result of XOR: " << xor_result << std::endl;
    // Output: Result of XOR: 4
    return 0;
}
