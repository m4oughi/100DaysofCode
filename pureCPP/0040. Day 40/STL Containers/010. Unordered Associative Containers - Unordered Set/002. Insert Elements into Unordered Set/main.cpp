#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset;
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(10);  // Duplicate values are ignored

    for (int num : uset) {
        std::cout << num << " ";
    }

    return 0;
}
