#include <iostream>
#include <set>

int main() {
    std::multiset<int> mset = {10, 20, 20, 30, 30, 30, 40};

    auto lb = mset.lower_bound(30);
    auto ub = mset.upper_bound(30);

    std::cout << "Elements equal to 30: ";
    for (auto it = lb; it != ub; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
