#include <iostream>
#include <vector>
#include <algorithm>

struct Employee {
    std::string name;
    int age;
};

int main() {
    std::vector<Employee> employees = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    auto youngest = *std::min_element(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.age < b.age;
    });
    auto oldest = *std::max_element(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.age < b.age;
    });

    std::cout << "Youngest: " << youngest.name << " (" << youngest.age << ")\n";
    std::cout << "Oldest: " << oldest.name << " (" << oldest.age << ")\n";

    return 0;
}
