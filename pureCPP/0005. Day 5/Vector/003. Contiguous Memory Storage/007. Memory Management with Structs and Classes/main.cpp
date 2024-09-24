#include <iostream>
#include <vector>

struct Employee {
    int id;
    std::string name;

    Employee(int i, std::string n) : id(i), name(n) {}
};

int main() {
    std::vector<Employee> employees;
    
    employees.emplace_back(1, "John");
    employees.emplace_back(2, "Doe");
    employees.emplace_back(3, "Smith");

    // Accessing the name of the second employee directly through raw memory
    Employee* ptr = employees.data();
    std::cout << "Second employee name: " << (ptr + 1)->name << std::endl;

    // Modifying the second employee's name
    (ptr + 1)->name = "Jane";

    // Display the modified employees
    for (const auto& emp : employees) {
        std::cout << emp.id << ": " << emp.name << std::endl;
    }

    return 0;
}
