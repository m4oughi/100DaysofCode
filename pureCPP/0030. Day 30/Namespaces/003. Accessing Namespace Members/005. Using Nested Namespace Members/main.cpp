#include <iostream>

namespace Company {
    namespace HR {
        int employees = 50;

        void display() {
            std::cout << "HR Employees: " << employees << std::endl;
        }
    }

    namespace IT {
        int employees = 30;

        void display() {
            std::cout << "IT Employees: " << employees << std::endl;
        }
    }
}

int main() {
    Company::HR::display();  // Accessing members from nested HR namespace
    Company::IT::display();  // Accessing members from nested IT namespace
    return 0;
}
