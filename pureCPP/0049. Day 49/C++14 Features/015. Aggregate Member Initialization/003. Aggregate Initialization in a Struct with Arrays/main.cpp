#include <iostream>

struct Scores {
    std::string name = "Student";
    int marks[3] = {80, 85, 90};  // Default array values
};

int main() {
    Scores s1{};  // Uses default values
    Scores s2{"Alice", {95, 88, 92}};  // Overrides array values

    std::cout << "Student 1: " << s1.name << " -> " 
              << s1.marks[0] << ", " << s1.marks[1] << ", " << s1.marks[2] << "\n";

    std::cout << "Student 2: " << s2.name << " -> " 
              << s2.marks[0] << ", " << s2.marks[1] << ", " << s2.marks[2] << "\n";

    return 0;
}
