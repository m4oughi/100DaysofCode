#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    students.insert_or_assign(2, "Charlie"); // Updates Bob to Charlie
    students.insert_or_assign(3, "David");   // Inserts a new key-value pair

    std::cout << "Updated Student Records:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
