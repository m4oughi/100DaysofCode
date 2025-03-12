#include <iostream>

[[deprecated("Use newFunction() instead.")]]
void oldFunction() {
    std::cout << "This function is deprecated!" << std::endl;
}

void newFunction() {
    std::cout << "Use this function instead." << std::endl;
}

int main() {
    oldFunction(); // Compiler will warn about usage
    newFunction();
    return 0;
}
