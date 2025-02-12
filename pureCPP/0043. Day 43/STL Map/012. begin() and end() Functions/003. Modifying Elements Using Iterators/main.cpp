#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (auto it = students.begin(); it != students.end(); ++it) {
        it->second += " (Updated)";
    }

    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
