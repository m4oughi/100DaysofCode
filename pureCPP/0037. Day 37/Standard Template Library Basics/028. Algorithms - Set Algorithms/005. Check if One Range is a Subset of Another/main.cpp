#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 3};
    std::vector<int> set2 = {1, 2, 3, 4, 5};

    bool isSubset = std::includes(set2.begin(), set2.end(), set1.begin(), set1.end());

    std::cout << "Set1 is a subset of Set2: " << std::boolalpha << isSubset << "\n";

    return 0;
}
