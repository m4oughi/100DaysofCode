#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 4};

    bool isLess = std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());

    std::cout << "Vec1 is lexicographically less than Vec2: " << std::boolalpha << isLess << "\n";

    return 0;
}
