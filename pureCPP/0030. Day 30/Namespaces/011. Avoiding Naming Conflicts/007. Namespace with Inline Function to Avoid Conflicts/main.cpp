#include <iostream>

namespace Tools {
    inline void debug() {
        std::cout << "Debugging in Tools namespace" << std::endl;
    }
}

void debug() {
    std::cout << "Global debug function" << std::endl;
}

int main() {
    debug();  // Calls global debug function
    Tools::debug();  // Calls inline function from Tools namespace
    return 0;
}
