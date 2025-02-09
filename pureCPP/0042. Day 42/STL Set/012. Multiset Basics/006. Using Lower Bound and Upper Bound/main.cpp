#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30, 30, 30};

    auto lb = ms.lower_bound(20);
    auto ub = ms.upper_bound(20);

    std::cout << "Elements in range [lower_bound, upper_bound) of 20: ";
    for (auto it = lb; it != ub; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
