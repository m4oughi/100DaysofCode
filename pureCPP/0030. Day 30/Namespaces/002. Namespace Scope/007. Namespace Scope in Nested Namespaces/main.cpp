#include <iostream>

namespace Company {
    int employees = 100;

    namespace HR {
        int employees = 50;

        void display() {
            std::cout << "HR Employees: " << employees << std::endl;  // Access HR namespace variable
        }
    }
}

int main() {
    std::cout << "Total Employees: " << Company::employees << std::endl;  // Access Company namespace variable
    Company::HR::display();  // Access HR namespace function within Company namespace

    return 0;
}
