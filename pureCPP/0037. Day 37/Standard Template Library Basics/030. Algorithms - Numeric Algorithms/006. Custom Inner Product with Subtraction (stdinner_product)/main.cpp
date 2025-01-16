#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int result = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0,
                                    std::plus<>(), std::minus<>());

    std::cout << "Custom inner product with subtraction: " << result << "\n";

    return 0;
}
