#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;
    students[1] = "Alice";
    students[2] = "Bob";
    students[3] = "Charlie";

    for (const auto& [id, name] : students) {
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }
    return 0;
}
