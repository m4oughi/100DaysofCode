#include <iostream>

inline const int GLOBAL_CONSTANT = 300; // Inline global constant

void displayGlobalConstant() {
    std::cout << "Global constant: " << GLOBAL_CONSTANT << std::endl; // Prints 300
}
