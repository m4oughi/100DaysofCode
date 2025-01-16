#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::multiset<int> set1 = {1, 2, 2, 3};
    std::multiset<int> set2 = {2, 3, 3, 4};

    std::multiset<int> sym_diff;
    std::set_symmetric_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
                                  std::inserter(sym_diff, sym_diff.begin()));

    for (int num : sym_diff) {
        std::cout << num << " ";
    }
    return 0;
}
