#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};
    int target = 30;

    auto range = numbers.equal_range(target);

    std::cout << "Lower bound: " << (range.first != numbers.end() ? std::to_string(*range.first) : "None") << "\n";
    std::cout << "Upper bound: " << (range.second != numbers.end() ? std::to_string(*range.second) : "None") << "\n";

    return 0;
}
