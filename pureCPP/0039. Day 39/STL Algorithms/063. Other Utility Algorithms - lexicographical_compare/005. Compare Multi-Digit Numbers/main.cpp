#include <iostream>
#include <vector>
#include <algorithm>

bool customCompare(int a, int b) {
    return std::to_string(a) < std::to_string(b);
}

int main() {
    std::vector<int> vec1{12, 34, 56};
    std::vector<int> vec2{12, 33, 56};

    if (std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), customCompare)) {
        std::cout << "vec1 is lexicographically smaller than vec2.\n";
    } else {
        std::cout << "vec1 is not lexicographically smaller than vec2.\n";
    }
    // Output: vec1 is not lexicographically smaller than vec2.
}
