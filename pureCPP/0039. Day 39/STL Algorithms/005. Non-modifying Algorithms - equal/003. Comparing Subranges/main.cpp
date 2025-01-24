#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {2, 3, 4};

    bool isEqual = std::equal(vec2.begin(), vec2.end(), vec1.begin() + 1);

    std::cout << (isEqual ? "Subranges are equal." : "Subranges are not equal.") << std::endl;

    return 0;
}
