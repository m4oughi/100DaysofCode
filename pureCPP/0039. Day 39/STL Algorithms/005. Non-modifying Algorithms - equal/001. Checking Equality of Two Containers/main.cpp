#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    bool isEqual = std::equal(vec1.begin(), vec1.end(), vec2.begin());

    std::cout << (isEqual ? "Containers are equal." : "Containers are not equal.") << std::endl;

    return 0;
}
