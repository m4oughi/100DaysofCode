#include <iostream>
#include <map>

struct Employee {
    int id;
    std::string name;

    bool operator<(const Employee& other) const {
        return id < other.id; // Sorting employees by ID
    }
};

int main() {
    std::map<Employee, std::string> employeeRoles;

    employeeRoles[{102, "Alice"}] = "Manager";
    employeeRoles[{101, "Bob"}] = "Developer";
    employeeRoles[{103, "Charlie"}] = "Designer";

    std::cout << "Employees ordered by ID:\n";
    for (const auto& entry : employeeRoles) {
        std::cout << "ID: " << entry.first.id << " -> " << entry.second << "\n";
    }

    return 0;
}
