#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1{2, 4, 6};
    std::vector<int> vec2{2, 4, 8};

    if (std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end())) {
        std::cout << "vec1 should appear before vec2 in sorted order.\n";
    } else {
        std::cout << "vec1 should not appear before vec2 in sorted order.\n";
    }
    // Output: vec1 should appear before vec2 in sorted order.
}
