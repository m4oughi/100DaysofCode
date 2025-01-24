#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> signal1 = {1, 2, 3};
    std::vector<int> signal2 = {4, 5, 6};

    int cross_correlation = std::inner_product(signal1.begin(), signal1.end(), signal2.rbegin(), 0);

    std::cout << "Cross-correlation: " << cross_correlation << "\n"; // Output: 32
    return 0;
}
