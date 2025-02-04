#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {10, 20, 30, 40};

    uset.erase(20);  // Removes the element 20

    for (int num : uset) {
        std::cout << num << " ";
    }

    return 0;
}
