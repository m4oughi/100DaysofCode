#include <iostream>
#include <tuple>

struct Employee {
    int id;
    std::string name;
};

int main() {
    std::tuple<int, std::string, Employee> record = {101, "Sales", {1, "Alice"}};

    std::cout << "Department ID: " << std::get<0>(record) << "\n";
    std::cout << "Department Name: " << std::get<1>(record) << "\n";
    std::cout << "Employee Name: " << std::get<2>(record).name << "\n";

    return 0;
}
