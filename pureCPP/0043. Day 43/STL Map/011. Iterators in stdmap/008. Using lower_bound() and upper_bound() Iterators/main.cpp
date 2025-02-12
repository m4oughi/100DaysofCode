#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}, {4, "David"}};

    auto lower = students.lower_bound(2); // First element >= 2
    auto upper = students.upper_bound(3); // First element > 3

    std::cout << "Lower Bound: " << lower->first << " -> " << lower->second << "\n";
    std::cout << "Upper Bound: " << upper->first << " -> " << upper->second << "\n";

    return 0;
}
