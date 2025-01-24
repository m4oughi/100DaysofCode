#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 2, 3, 4, 5};
    std::vector<int> set2 = {1, 2, 3, 4, 5};
    std::vector<int> result;

    std::set_symmetric_difference(set1.begin(), set1.end(),
                                   set2.begin(), set2.end(),
                                   std::back_inserter(result));

    if (result.empty()) {
        std::cout << "The sets have no symmetric difference.\n";
    } else {
        std::cout << "Symmetric Difference: ";
        for (int num : result) {
            std::cout << num << " ";
        }
    }

    return 0;
}
