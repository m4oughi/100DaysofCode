#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> row1{1, 2, 3};
    std::vector<int> row2{4, 5, 6};

    int dot_product = std::transform_reduce(row1.begin(), row1.end(), row2.begin(), 0);

    std::cout << "Dot product of rows: " << dot_product << '\n'; // Output: 32
}
