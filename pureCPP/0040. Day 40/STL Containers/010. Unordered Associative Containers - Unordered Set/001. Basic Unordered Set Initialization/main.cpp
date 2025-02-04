#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {5, 2, 8, 1, 3};

    for (int num : uset) {
        std::cout << num << " ";  // Order is not guaranteed
    }

    return 0;
}
