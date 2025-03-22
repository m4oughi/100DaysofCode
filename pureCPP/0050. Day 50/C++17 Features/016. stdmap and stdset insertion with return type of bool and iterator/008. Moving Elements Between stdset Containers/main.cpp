#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3, 4, 5};
    std::set<int> set2;

    auto [it, success] = set2.insert(*set1.find(3));

    if (success) {
        std::cout << "Moved value: " << *it << " from set1 to set2\n";
    }

    return 0;
}
