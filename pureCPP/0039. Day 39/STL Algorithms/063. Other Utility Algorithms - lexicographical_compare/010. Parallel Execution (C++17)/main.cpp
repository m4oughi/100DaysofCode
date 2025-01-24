#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> vec1{1, 3, 5};
    std::vector<int> vec2{1, 3, 6};

    bool result = std::lexicographical_compare(std::execution::par, vec1.begin(), vec1.end(), vec2.begin(), vec2.end());

    if (result) {
        std::cout << "vec1 is lexicographically smaller than vec2 (parallel execution).\n";
    } else {
        std::cout << "vec1 is not lexicographically smaller than vec2 (parallel execution).\n";
    }
    // Output: vec1 is lexicographically smaller than vec2 (parallel execution).
}
