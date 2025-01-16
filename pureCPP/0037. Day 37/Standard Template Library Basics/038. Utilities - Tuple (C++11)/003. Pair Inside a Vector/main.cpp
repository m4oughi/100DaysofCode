#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<std::pair<int, std::string>> students = {
        {1, "Alice"},
        {2, "Bob"},
        {3, "Charlie"}
    };

    for (const auto& student : students) {
        std::cout << "ID: " << student.first << ", Name: " << student.second << "\n";
    }

    return 0;
}
