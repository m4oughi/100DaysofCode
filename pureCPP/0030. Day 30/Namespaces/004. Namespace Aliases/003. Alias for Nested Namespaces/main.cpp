#include <iostream>

namespace Company {
    namespace HR {
        void manage() {
            std::cout << "HR management system" << std::endl;
        }
    }
}

// Alias for nested namespace
namespace HRM = Company::HR;

int main() {
    HRM::manage();  // Accessing nested HR namespace using alias
    return 0;
}
