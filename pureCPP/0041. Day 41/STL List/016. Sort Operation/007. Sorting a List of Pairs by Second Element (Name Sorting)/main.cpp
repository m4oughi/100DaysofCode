#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::pair<int, std::string>> students = {
        {3, "Alice"}, {1, "Charlie"}, {2, "Bob"}
    };

    students.sort([](const auto& a, const auto& b) {
        return a.second < b.second; // Sort by name
    });

    std::cout << "Sorted by Name: ";
    for (const auto& student : students) 
        std::cout << "(" << student.first << ", " << student.second << ") ";

    return 0;
}
