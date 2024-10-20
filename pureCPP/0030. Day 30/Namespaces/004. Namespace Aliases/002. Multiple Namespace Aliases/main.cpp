#include <iostream>

namespace Physics {
    void gravity() {
        std::cout << "Gravity affects all objects" << std::endl;
    }
}

namespace Chemistry {
    void reaction() {
        std::cout << "Chemical reactions occur" << std::endl;
    }
}

// Aliases for both namespaces
namespace Phy = Physics;
namespace Chem = Chemistry;

int main() {
    Phy::gravity();  // Accessing Physics namespace using alias
    Chem::reaction();  // Accessing Chemistry namespace using alias
    return 0;
}
