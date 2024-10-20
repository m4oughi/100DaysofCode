#include <iostream>

namespace Finance {
    void salary() {
        std::cout << "Processing salary" << std::endl;
    }
}

namespace IT {
    void systemUpdate() {
        std::cout << "System update in progress" << std::endl;
    }
}

// Alias for Finance namespace
namespace Fin = Finance;

int main() {
    Fin::salary();  // Accessing Finance namespace using alias
    IT::systemUpdate();  // Direct access to IT namespace
    return 0;
}
