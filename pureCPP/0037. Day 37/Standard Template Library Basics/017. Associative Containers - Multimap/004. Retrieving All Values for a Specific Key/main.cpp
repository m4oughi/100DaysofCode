#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> employees = {{1, "Alice"}, {2, "Bob"}, {1, "Charlie"}};

    auto range = employees.equal_range(1);
    std::cout << "Employees with ID 1:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << "Name: " << it->second << "\n";
    }
    return 0;
}
