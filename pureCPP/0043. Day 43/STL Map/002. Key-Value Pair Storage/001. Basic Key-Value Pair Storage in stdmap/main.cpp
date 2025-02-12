#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    students[1] = "Alice";
    students[2] = "Bob";
    students[3] = "Charlie";

    std::cout << "Student ID 1: " << students[1] << "\n";
    std::cout << "Student ID 2: " << students[2] << "\n";
    std::cout << "Student ID 3: " << students[3] << "\n";

    return 0;
}
