#include <iostream>

namespace LongNamespaceName {
    void process() {
        std::cout << "Long namespace processing" << std::endl;
    }
}

// Alias chain
namespace LNN = LongNamespaceName;
namespace Shorter = LNN;

int main() {
    Shorter::process();  // Using the chained alias 'Shorter'
    return 0;
}
