#include <iostream>
#include <map>

struct Employee {
    int id;
    std::string name;
};

int main() {
    std::map<int, Employee> employeeMap;
    employeeMap[1] = {1, "Alice"};
    employeeMap[2] = {2, "Bob"};

    for (const auto& [id, emp] : employeeMap) {
        std::cout << "ID: " << id << ", Name: " << emp.name << '\n';
    }

    return 0;
}
