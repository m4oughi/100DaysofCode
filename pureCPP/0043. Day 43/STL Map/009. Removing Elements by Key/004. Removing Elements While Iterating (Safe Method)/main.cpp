#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (auto it = students.begin(); it != students.end(); ) {
        if (it->first == 2) { // Condition for deletion
            it = students.erase(it); // Returns iterator to the next element
        } else {
            ++it;
        }
    }

    std::cout << "Updated Student Records:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
