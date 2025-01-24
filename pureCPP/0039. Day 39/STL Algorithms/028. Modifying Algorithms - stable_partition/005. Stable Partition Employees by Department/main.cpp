#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Employee {
    std::string name;
    std::string department;
};

int main() {
    std::vector<Employee> employees = {
        {"Alice", "HR"}, {"Bob", "IT"}, {"Charlie", "HR"}, {"Dave", "Finance"}, {"Eve", "IT"}};

    std::stable_partition(employees.begin(), employees.end(), [](const Employee& e) { return e.department == "HR"; });

    std::cout << "HR Employees:\n";
    for (const auto& emp : employees) {
        if (emp.department == "HR") std::cout << emp.name << " (" << emp.department << ")\n";
    }

    std::cout << "\nOther Employees:\n";
    for (const auto& emp : employees) {
        if (emp.department != "HR") std::cout << emp.name << " (" << emp.department << ")\n";
    }

    return 0;
}
