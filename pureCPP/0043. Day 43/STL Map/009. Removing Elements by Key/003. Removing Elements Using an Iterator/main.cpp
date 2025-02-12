#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    auto it = students.find(2);
    if (it != students.end()) {
        students.erase(it); // Erases the element using iterator
    }

    std::cout << "Updated Student Records:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
