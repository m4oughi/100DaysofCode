#include <iostream>
#include <set>

int main() {
    std::set<int> s = {1, 2, 3, 4, 5};
    std::multiset<int> ms = {1, 2, 2, 3, 4, 5, 2};

    std::cout << "Count of 2 in set: " << s.count(2) << std::endl;
    std::cout << "Count of 2 in multiset: " << ms.count(2) << std::endl;

    return 0;
}
