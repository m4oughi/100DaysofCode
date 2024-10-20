#include <iostream>

namespace Library {
    inline namespace Version1 {
        void printVersion() {
            std::cout << "Library Version 1" << std::endl;
        }
    }
}

int main() {
    Library::printVersion();  // Accessing function in inline namespace without specifying Version1
    return 0;
}
