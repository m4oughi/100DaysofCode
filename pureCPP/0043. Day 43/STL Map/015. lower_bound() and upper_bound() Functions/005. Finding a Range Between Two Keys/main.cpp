#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {3, "Bob"}, {5, "Charlie"}, {7, "David"}};

    auto start = students.lower_bound(3);
    auto end = students.upper_bound(5);

    std::cout << "Keys between 3 and 5 (inclusive of 3, exclusive of 5):\n";
    for (auto it = start; it != end; ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
