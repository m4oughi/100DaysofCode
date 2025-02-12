#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> students;

    // Inserting duplicate keys
    students.insert({1, "Alice"});
    students.insert({2, "Bob"});
    students.insert({1, "Charlie"});

    // Printing all elements
    for (const auto& [key, value] : students) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
