#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int dot_product = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 10);

    std::cout << "Dot product with initial value: " << dot_product << "\n"; // Output: 42
    return 0;
}
