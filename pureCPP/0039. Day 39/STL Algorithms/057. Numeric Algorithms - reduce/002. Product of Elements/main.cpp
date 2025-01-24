#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    int product = std::reduce(vec.begin(), vec.end(), 1, std::multiplies<>());

    std::cout << "Product of elements: " << product << std::endl;
    // Output: Product of elements: 24
    return 0;
}
