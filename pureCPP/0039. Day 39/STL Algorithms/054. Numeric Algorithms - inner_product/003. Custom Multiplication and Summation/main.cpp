#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int custom_result = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0,
        [](int acc, int product) { return acc + product; }, // Custom summation
        [](int x, int y) { return x * y + 1; }              // Custom multiplication
    );

    std::cout << "Custom result: " << custom_result << "\n"; // Output: 41
    return 0;
}
