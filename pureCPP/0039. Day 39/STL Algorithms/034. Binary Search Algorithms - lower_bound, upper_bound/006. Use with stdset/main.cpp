#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};
    int target = 35;

    auto lower = numbers.lower_bound(target);
    auto upper = numbers.upper_bound(target);

    std::cout << "Lower bound: " << (lower != numbers.end() ? std::to_string(*lower) : "None") << "\n";
    std::cout << "Upper bound: " << (upper != numbers.end() ? std::to_string(*upper) : "None") << "\n";
    return 0;
}
