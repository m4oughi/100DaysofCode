#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {3, 4, 5};

    set1.insert(set2.begin(), set2.end()); // Union of set1 and set2

    for (int num : set1) {
        std::cout << num << " ";
    }
    return 0;
}
