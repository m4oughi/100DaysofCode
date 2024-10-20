#include <iostream>

namespace Printer {
    void print(int num) {
        std::cout << "Printing an integer: " << num << std::endl;
    }

    void print(double num) {
        std::cout << "Printing a double: " << num << std::endl;
    }
}

int main() {
    using Printer::print;

    print(10);     // Calls the version for int
    print(10.5);   // Calls the version for double
    return 0;
}
