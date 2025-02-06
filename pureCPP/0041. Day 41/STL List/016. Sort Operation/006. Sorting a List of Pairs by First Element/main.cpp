#include <iostream>
#include <list>
#include <utility>

int main() {
    std::list<std::pair<int, std::string>> students = {
        {3, "Alice"}, {1, "Bob"}, {2, "Charlie"}
    };

    students.sort(); // Sort by first element (default behavior for pairs)

    std::cout << "Sorted by ID: ";
    for (const auto& student : students) 
        std::cout << "(" << student.first << ", " << student.second << ") ";

    return 0;
}
