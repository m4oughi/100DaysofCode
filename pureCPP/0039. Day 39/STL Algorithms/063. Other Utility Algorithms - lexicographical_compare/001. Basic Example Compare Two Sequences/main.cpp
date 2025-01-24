#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1{1, 2, 3};
    std::vector<int> vec2{1, 2, 4};

    if (std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end())) {
        std::cout << "vec1 is lexicographically smaller than vec2.\n";
    } else {
        std::cout << "vec1 is not lexicographically smaller than vec2.\n";
    }
    // Output: vec1 is lexicographically smaller than vec2.
}
