#include <iostream>
#include <list>
#include <utility>

int main() {
    std::list<std::pair<int, std::string>> students = {
        {1, "Alice"}, {2, "Bob"}, {3, "Charlie"}
    };

    students.reverse(); // Reverse the list

    std::cout << "Reversed List of Pairs: ";
    for (const auto& student : students) 
        std::cout << "(" << student.first << ", " << student.second << ") ";

    return 0;
}
