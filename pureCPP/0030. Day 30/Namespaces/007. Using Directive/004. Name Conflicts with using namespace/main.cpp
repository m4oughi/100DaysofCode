#include <iostream>

namespace Alpha {
    void print() {
        std::cout << "Alpha::print()" << std::endl;
    }
}

namespace Beta {
    void print() {
        std::cout << "Beta::print()" << std::endl;
    }
}

int main() {
    using namespace Alpha;
    using namespace Beta;

    // print();  // Causes a conflict - ambiguous call

    Alpha::print();  // Access using full qualification to resolve conflict
    Beta::print();
    return 0;
}
