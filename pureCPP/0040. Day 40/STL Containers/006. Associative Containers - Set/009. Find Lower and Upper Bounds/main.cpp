#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40, 50};

    auto lower = s.lower_bound(20);
    auto upper = s.upper_bound(30);

    std::cout << "Lower bound of 20: " << *lower << "\n";
    std::cout << "Upper bound of 30: " << *upper << "\n";

    return 0;
}
