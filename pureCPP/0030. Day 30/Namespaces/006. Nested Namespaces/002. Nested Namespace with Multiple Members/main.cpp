#include <iostream>

namespace Company {
    namespace HR {
        int employees = 50;

        void displayEmployees() {
            std::cout << "HR Employees: " << employees << std::endl;
        }
    }
}

int main() {
    Company::HR::displayEmployees();  // Accessing function in nested namespace
    std::cout << "Number of employees: " << Company::HR::employees << std::endl;  // Accessing variable
    return 0;
}
