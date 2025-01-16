#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int innerProduct = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);

    std::cout << "Inner product: " << innerProduct << "\n";

    return 0;
}
