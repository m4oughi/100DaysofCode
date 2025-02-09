#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40};
    std::multiset<int> ms = {10, 20, 20, 30, 40};

    std::cout << "Lower bound of 20 in set: " << *s.lower_bound(20) << std::endl;
    std::cout << "Upper bound of 20 in set: " << *s.upper_bound(20) << std::endl;

    std::cout << "Lower bound of 20 in multiset: " << *ms.lower_bound(20) << std::endl;
    std::cout << "Upper bound of 20 in multiset: " << *ms.upper_bound(20) << std::endl;

    return 0;
}
