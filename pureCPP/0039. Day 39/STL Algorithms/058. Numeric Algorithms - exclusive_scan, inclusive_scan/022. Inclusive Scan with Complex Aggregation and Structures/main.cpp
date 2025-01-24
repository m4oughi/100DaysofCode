#include <iostream>
#include <vector>
#include <numeric>
#include <string>

struct Employee {
    std::string name;
    double salary;
};

struct CumulativeSalary {
    double total_salary;
    int employee_count;
};

int main() {
    std::vector<Employee> employees = {
        {"Alice", 50000},
        {"Bob", 60000},
        {"Charlie", 55000},
        {"Diana", 70000}
    };
    std::vector<CumulativeSalary> cumulative_salaries(employees.size());

    std::inclusive_scan(employees.begin(), employees.end(), cumulative_salaries.begin(),
        [&](const CumulativeSalary& acc, const Employee& current) -> CumulativeSalary {
            return CumulativeSalary{
                acc.total_salary + current.salary,
                acc.employee_count + 1
            };
        },
        CumulativeSalary{0.0, 0}
    );

    std::cout << "Inclusive Scan with Complex Aggregation:\n";
    for (const auto& cs : cumulative_salaries) {
        std::cout << "Total Salary: " << cs.total_salary
                  << ", Employee Count: " << cs.employee_count << "\n";
    }
    /*
    Output:
    Total Salary: 50000, Employee Count: 1
    Total Salary: 110000, Employee Count: 2
    Total Salary: 165000, Employee Count: 3
    Total Salary: 235000, Employee Count: 4
    */

    return 0;
}
