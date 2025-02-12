#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    try {
        students.at(2) = "Charlie"; // Updates Bob to Charlie
        students.at(3) = "David";   // Throws exception, key 3 doesn't exist
    } catch (const std::out_of_range& e) {
        std::cout << "Exception: Key 3 not found!\n";
    }

    std::cout << "Updated Student Records:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
