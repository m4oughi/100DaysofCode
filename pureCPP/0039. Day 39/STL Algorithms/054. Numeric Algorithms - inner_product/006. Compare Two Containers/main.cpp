#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};

    bool are_equal = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), true,
        std::logical_and<>(), // Logical AND for final result
        std::equal_to<>()     // Compare each element
    );

    std::cout << "Are vectors equal? " << (are_equal ? "Yes" : "No") << "\n"; // Output: Yes
    return 0;
}
