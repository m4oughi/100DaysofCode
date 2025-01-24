#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    int sum_with_offset = std::reduce(vec.begin(), vec.end(), 10);

    std::cout << "Sum with initial value 10: " << sum_with_offset << std::endl;
    // Output: Sum with initial value 10: 20
    return 0;
}
