#include <iostream>

// Function declaration with multiple default parameters
void displayInfo(std::string name = "Guest", int age = 18);

int main() {
    displayInfo();                  // Uses both default parameters
    displayInfo("John");             // Uses default age
    displayInfo("Alice", 25);        // No defaults used
    return 0;
}

// Function definition with multiple default parameters
void displayInfo(std::string name, int age) {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
