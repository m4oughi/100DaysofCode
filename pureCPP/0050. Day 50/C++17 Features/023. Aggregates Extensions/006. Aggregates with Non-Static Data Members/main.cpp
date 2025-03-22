#include <iostream>

struct Employee {
    std::string name = "Unknown";
    int id = 0;
};

int main() {
    Employee e1{}; // Uses default values
    Employee e2{"Alice", 101}; // Explicitly initialized

    std::cout << "e1: " << e1.name << " (ID: " << e1.id << ")\n";
    std::cout << "e2: " << e2.name << " (ID: " << e2.id << ")\n";
    return 0;
}
