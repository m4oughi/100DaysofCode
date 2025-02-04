#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums;
    ums.insert(10);
    ums.insert(20);
    ums.insert(30);
    ums.insert(10);  // Duplicate values are allowed

    for (int num : ums) {
        std::cout << num << " ";
    }

    return 0;
}
