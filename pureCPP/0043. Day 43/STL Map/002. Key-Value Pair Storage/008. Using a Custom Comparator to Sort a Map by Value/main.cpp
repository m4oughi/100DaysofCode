#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

bool compare(const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
    return a.second < b.second; // Sort by value (string)
}

int main() {
    std::map<int, std::string> employees = {
        {3, "John"},
        {1, "Alice"},
        {2, "Bob"}
    };

    std::vector<std::pair<int, std::string>> sortedEmployees(employees.begin(), employees.end());
    std::sort(sortedEmployees.begin(), sortedEmployees.end(), compare);

    std::cout << "Employees sorted by name:\n";
    for (const auto& entry : sortedEmployees) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
