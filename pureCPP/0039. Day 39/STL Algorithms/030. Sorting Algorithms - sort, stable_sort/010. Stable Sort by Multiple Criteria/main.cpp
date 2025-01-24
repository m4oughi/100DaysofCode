#include <iostream>
#include <vector>
#include <algorithm>

struct Employee {
    std::string name;
    std::string department;
};

int main() {
    std::vector<Employee> employees = {
        {"Alice", "HR"}, {"Bob", "Engineering"}, {"Charlie", "HR"}, {"Dave", "Engineering"}
    };

    std::stable_sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.name < b.name; // Secondary criteria
    });

    std::stable_sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.department < b.department; // Primary criteria
    });

    std::cout << "Employees sorted by department and name:\n";
    for (const auto& emp : employees) {
        std::cout << emp.name << " (" << emp.department << ")\n";
    }
    return 0;
}
