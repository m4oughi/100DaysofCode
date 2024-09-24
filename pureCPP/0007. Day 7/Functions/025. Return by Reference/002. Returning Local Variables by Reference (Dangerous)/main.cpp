#include <iostream>

int& getLocalVar() {
    int localVar = 5;
    return localVar;  // Dangerous: Returning reference to a local variable
}

int main() {
    int& ref = getLocalVar();  // Undefined behavior
    std::cout << "LocalVar: " << ref << std::endl;  // Output is undefined
    return 0;
}
