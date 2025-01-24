#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int dot_product = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);

    std::cout << "Dot product: " << dot_product << "\n"; // Output: 32
    return 0;
}
