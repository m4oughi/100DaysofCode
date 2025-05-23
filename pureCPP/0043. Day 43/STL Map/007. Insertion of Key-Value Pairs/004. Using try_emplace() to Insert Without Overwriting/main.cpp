#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    students.try_emplace(1, "Alice");
    students.try_emplace(2, "Bob");
    students.try_emplace(1, "Charlie"); // Will fail silently

    std::cout << "Student Records:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
