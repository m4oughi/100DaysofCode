#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset;

    uset.insert(50);
    uset.insert(20);
    uset.insert(10);

    std::cout << "Unordered set elements: ";
    for (int num : uset) {
        std::cout << num << " ";
    }
    return 0;
}
