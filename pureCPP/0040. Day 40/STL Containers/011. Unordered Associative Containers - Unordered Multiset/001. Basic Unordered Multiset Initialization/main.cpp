#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums = {5, 2, 8, 1, 3, 2, 8};

    for (int num : ums) {
        std::cout << num << " ";  // Order is not guaranteed
    }

    return 0;
}
