#include <iostream>

namespace LongNamespaceName {
    void process() {
        std::cout << "Processing in LongNamespaceName" << std::endl;
    }
}

namespace ShortAlias = LongNamespaceName;  // Creating an alias

int main() {
    ShortAlias::process();  // Calls process using the alias
    return 0;
}
