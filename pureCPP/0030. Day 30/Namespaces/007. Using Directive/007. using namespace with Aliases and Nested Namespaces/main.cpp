#include <iostream>

namespace Company {
    namespace HR {
        void hire() {
            std::cout << "Hiring an employee" << std::endl;
        }
    }
}

// Alias for nested namespace
namespace HR = Company::HR;

int main() {
    using namespace HR;  // Using directive for the alias
    hire();  // Direct access through alias
    return 0;
}
