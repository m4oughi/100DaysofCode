#include <iostream>
#include <set>

int main() {
    std::multiset<int> set1 = {1, 2, 2, 3};
    std::multiset<int> set2 = {2, 3, 3, 4};

    set1.insert(set2.begin(), set2.end()); // Union of set1 and set2

    for (int num : set1) {
        std::cout << num << " ";
    }
    return 0;
}
