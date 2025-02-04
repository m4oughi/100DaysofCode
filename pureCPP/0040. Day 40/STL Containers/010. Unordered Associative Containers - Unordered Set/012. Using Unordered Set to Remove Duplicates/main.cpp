#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 5};
    std::unordered_set<int> uset(vec.begin(), vec.end());

    std::cout << "Unique elements: ";
    for (int num : uset) {
        std::cout << num << " ";
    }

    return 0;
}
