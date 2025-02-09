#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {5, 3, 8, 1, 2};

    std::cout << "Unordered set elements: ";
    for (int num : uset) {
        std::cout << num << " ";
    }
    return 0;
}
