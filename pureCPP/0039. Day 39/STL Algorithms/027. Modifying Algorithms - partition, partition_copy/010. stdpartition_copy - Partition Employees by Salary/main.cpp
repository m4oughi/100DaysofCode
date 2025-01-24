#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Employee {
    std::string name;
    double salary;
};

int main() {
    std::vector<Employee> employees = {
        {"Alice", 75000}, {"Bob", 50000}, {"Charlie", 60000}, {"Dave", 30000}, {"Eve", 90000}};
    std::vector<Employee> high_salary, low_salary;

    std::partition_copy(employees.begin(), employees.end(), std::back_inserter(high_salary), std::back_inserter(low_salary),
                        [](const Employee& e) { return e.salary > 60000; });

    std::cout << "Employees with high salaries:\n";
    for (const auto& emp : high_salary) {
        std::cout << emp.name << " ($" << emp.salary << ")\n";
    }

    std::cout << "\nEmployees with low salaries:\n";
    for (const auto& emp : low_salary) {
        std::cout << emp.name << " ($" << emp.salary << ")\n";
    }

    return 0;
}
