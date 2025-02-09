#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {10, 20, 30, 40};

    uset.erase(30); // Removes 30

    std::cout << "Unordered set after removing 30: ";
    for (int num : uset) {
        std::cout << num << " ";
    }
    return 0;
}
