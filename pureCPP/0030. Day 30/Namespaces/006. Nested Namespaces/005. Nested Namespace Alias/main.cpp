#include <iostream>

namespace Software {
    namespace Tools {
        void version() {
            std::cout << "Tool version 1.0" << std::endl;
        }
    }
}

// Alias for nested namespace
namespace Tools = Software::Tools;

int main() {
    Tools::version();  // Accessing Tools::version through alias
    return 0;
}
