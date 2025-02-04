#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 5};
    std::unordered_multiset<int> ums(vec.begin(), vec.end());

    std::cout << "Element frequencies:\n";
    for (int num : vec) {
        std::cout << num << " appears " << ums.count(num) << " times.\n";
    }

    return 0;
}
