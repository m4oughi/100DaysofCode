#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::multiset<int> set1 = {1, 2, 2, 3};
    std::multiset<int> set2 = {2, 3, 4};

    std::multiset<int> difference;
    std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
                        std::inserter(difference, difference.begin()));

    for (int num : difference) {
        std::cout << num << " ";
    }
    return 0;
}
