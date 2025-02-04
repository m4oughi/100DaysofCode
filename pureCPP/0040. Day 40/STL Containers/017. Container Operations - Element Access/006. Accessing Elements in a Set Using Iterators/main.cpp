#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {5, 10, 15, 20};

    auto it = mySet.begin();
    std::advance(it, 2);
    std::cout << "Third element: " << *it << "\n"; // 15

    return 0;
}
