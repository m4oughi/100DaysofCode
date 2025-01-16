#include <iostream>
#include <map>

bool inRange(int id) {
    return id >= 1 && id <= 2;
}

int main() {
    std::multimap<int, std::string> employees = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}, {1, "Dave"}};

    std::cout << "Employees with ID between 1 and 2:\n";
    for (const auto &pair : employees) {
        if (inRange(pair.first)) {
            std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
        }
    }

    return 0;
}
