#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    students[1] = "Alice";
    students[2] = "Bob";
    students[1] = "Charlie"; // Overwrites "Alice"

    std::cout << "Student Records:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
