#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;
    students.insert({1, "Alice"});
    students[2] = "Bob";  // Using [] to insert

    for (const auto &pair : students) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
