#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1{1, 2, 3, 4};
    std::vector<int> vec2{1, 2, 5};

    if (std::lexicographical_compare(vec1.begin(), vec1.begin() + 3, vec2.begin(), vec2.begin() + 3)) {
        std::cout << "First 3 elements of vec1 are lexicographically smaller than vec2.\n";
    } else {
        std::cout << "First 3 elements of vec1 are not lexicographically smaller than vec2.\n";
    }
    // Output: First 3 elements of vec1 are lexicographically smaller than vec2.
}
