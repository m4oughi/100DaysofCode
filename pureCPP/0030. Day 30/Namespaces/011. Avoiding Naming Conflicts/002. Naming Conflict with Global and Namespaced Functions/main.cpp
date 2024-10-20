#include <iostream>

void print() {
    std::cout << "Global print function" << std::endl;
}

namespace Utility {
    void print() {
        std::cout << "Utility namespace print function" << std::endl;
    }
}

int main() {
    print();  // Calls global print
    Utility::print();  // Calls namespaced Utility::print
    return 0;
}
