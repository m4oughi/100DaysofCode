#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

int main() {
    std::set<int> set1 = {1, 2, 3, 4, 5};
    std::set<int> set2 = {3, 4, 6};

    std::vector<int> differenceResult;

    std::set_difference(set1.begin(), set1.end(),
                        set2.begin(), set2.end(),
                        std::back_inserter(differenceResult));

    std::cout << "Difference (Set1 - Set2): ";
    for (int num : differenceResult) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
