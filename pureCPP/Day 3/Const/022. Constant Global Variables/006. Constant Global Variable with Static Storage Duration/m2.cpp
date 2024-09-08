#include <iostream>

void displayGlobalConstant(); // Declaration of function

void displayGlobalConstant() {
    std::cout << "Global constant in file1: " << GLOBAL_CONSTANT << std::endl; // Error: GLOBAL_CONSTANT not visible here
}
