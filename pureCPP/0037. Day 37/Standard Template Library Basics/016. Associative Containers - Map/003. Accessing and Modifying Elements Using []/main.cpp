#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    // Accessing and modifying elements
    std::cout << "Student with ID 1: " << students[1] << "\n";
    students[1] = "Alex";  // Modify existing entry

    std::cout << "Updated name: " << students[1] << "\n";
    return 0;
}
