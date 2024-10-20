// File1.cpp
#include <iostream>

namespace MyNamespace {
    void function1() {
        std::cout << "Function 1 from MyNamespace" << std::endl;
    }
}

// File2.cpp
#include <iostream>

namespace MyNamespace {
    void function2() {
        std::cout << "Function 2 from MyNamespace" << std::endl;
    }
}

// Main file (Main.cpp)
#include "File1.cpp"
#include "File2.cpp"

int main() {
    MyNamespace::function1();  // Calls function from File1.cpp
    MyNamespace::function2();  // Calls function from File2.cpp
    return 0;
}
