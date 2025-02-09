#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40, 50};

    s.erase(30);  // O(log n) - Removes single element

    auto it = s.begin();
    std::advance(it, 1);
    s.erase(it, s.end());  // O(n) - Removes a range

    std::cout << "Set after deletions: ";
    for (int num : s) std::cout << num << " ";

    return 0;
}
