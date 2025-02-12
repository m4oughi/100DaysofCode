#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    students[1] = "Alice";
    students[2] = "Bob";

    std::cout << "Student 1: " << students[1] << "\n";  // Exists
    std::cout << "Student 3: " << students[3] << "\n";  // Not assigned, inserts empty string

    return 0;
}
