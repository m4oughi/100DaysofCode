#include <iostream>

// Function declaration with mixed default and non-default parameters
void displayGrade(std::string name, char grade = 'A');

int main() {
    displayGrade("Alice");           // Uses default grade
    displayGrade("John", 'B');       // Both arguments provided
    return 0;
}

// Function definition with mixed default and non-default parameters
void displayGrade(std::string name, char grade) {
    std::cout << name << " received grade: " << grade << std::endl;
}
