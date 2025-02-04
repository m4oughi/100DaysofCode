#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {3, 4, 5};

    std::set<int> unionSet(set1);
    unionSet.insert(set2.begin(), set2.end());

    for (int i : unionSet) {
        std::cout << i << " ";
    }

    return 0;
}
