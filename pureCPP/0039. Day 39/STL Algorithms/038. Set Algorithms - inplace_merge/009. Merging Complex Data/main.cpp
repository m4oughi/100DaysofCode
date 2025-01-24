#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Employee {
    std::string name;
    int age;
};

bool compareByAge(const Employee& a, const Employee& b) {
    return a.age < b.age;
}

int main() {
    std::vector<Employee> employees = {
        {"Alice", 25}, {"Bob", 30}, {"Charlie", 35},
        {"David", 28}, {"Eve", 33}, {"Frank", 40}
    };

    // The first half and the second half are sorted by age.
    std::inplace_merge(employees.begin(), employees.begin() + 3, employees.end(), compareByAge);

    std::cout << "Merged employees by age:\n";
    for (const auto& emp : employees) {
        std::cout << emp.name << " (" << emp.age << ")\n";
    }

    return 0;
}
