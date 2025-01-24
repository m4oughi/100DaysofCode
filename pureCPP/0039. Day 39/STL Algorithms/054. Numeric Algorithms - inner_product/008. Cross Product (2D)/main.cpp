#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2}; // Representing (1, 2)
    std::vector<int> vec2 = {3, 4}; // Representing (3, 4)

    int cross_product = vec1[0] * vec2[1] - vec1[1] * vec2[0];

    std::cout << "Cross product: " << cross_product << "\n"; // Output: -2
    return 0;
}
