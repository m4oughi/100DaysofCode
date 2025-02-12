#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    students.insert({{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}});

    std::cout << "Student Records:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
