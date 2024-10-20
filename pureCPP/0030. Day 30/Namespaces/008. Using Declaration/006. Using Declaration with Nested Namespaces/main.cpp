#include <iostream>

namespace Company {
    namespace HR {
        void hire() {
            std::cout << "Hiring new employee" << std::endl;
        }

        void fire() {
            std::cout << "Firing employee" << std::endl;
        }
    }
}

int main() {
    using Company::HR::hire;  // Using declaration for nested namespace

    hire();  // Calls the hire function without full qualification
    // fire();  // This would cause an error since `fire` is not in scope
    return 0;
}
