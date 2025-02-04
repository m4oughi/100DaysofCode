#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums = {10, 20, 30, 20, 40};

    ums.erase(20);  // Removes all occurrences of 20

    for (int num : ums) {
        std::cout << num << " ";
    }

    return 0;
}
