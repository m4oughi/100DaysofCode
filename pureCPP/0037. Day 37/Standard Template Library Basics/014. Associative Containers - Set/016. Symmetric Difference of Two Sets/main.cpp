#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {3, 4, 5, 6};

    std::set<int> sym_diff;
    std::set_symmetric_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
                                  std::inserter(sym_diff, sym_diff.begin()));

    for (int num : sym_diff) {
        std::cout << num << " ";
    }
    return 0;
}
