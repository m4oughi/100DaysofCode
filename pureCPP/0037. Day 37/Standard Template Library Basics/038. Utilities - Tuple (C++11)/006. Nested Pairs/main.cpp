#include <iostream>
#include <utility>

int main() {
    std::pair<int, std::pair<std::string, double>> employee(1, {"Alice", 75000.50});

    std::cout << "ID: " << employee.first << "\n";
    std::cout << "Name: " << employee.second.first << "\n";
    std::cout << "Salary: " << employee.second.second << "\n";

    return 0;
}
