#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    int sum = std::reduce(vec.begin(), vec.end());

    std::cout << "Sum of elements: " << sum << std::endl;
    // Output: Sum of elements: 15
    return 0;
}
