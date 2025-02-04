#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums = {5, 10, 10, 15};

    std::cout << "Size: " << ums.size() << "\n";

    return 0;
}
