#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{10, "Alice"}, {20, "Bob"}, {30, "Charlie"}, {40, "David"}};

    auto lower = students.lower_bound(15); // First key >= 15
    auto upper = students.upper_bound(30); // First key > 30

    std::cout << "Students in Range [15,30]:\n";
    for (auto it = lower; it != upper; ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
