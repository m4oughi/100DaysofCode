#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums = {1, 2, 2, 3, 3, 3};

    std::cout << "Count of 2: " << ums.count(2) << "\n";
    std::cout << "Count of 3: " << ums.count(3) << "\n";

    return 0;
}
