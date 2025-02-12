#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> studentNames; // Declaring a map with int keys and string values

    studentNames[1] = "Alice";
    studentNames[2] = "Bob";
    studentNames[3] = "Charlie";

    std::cout << "Student 1: " << studentNames[1] << "\n";
    std::cout << "Student 2: " << studentNames[2] << "\n";
    std::cout << "Student 3: " << studentNames[3] << "\n";

    return 0;
}
