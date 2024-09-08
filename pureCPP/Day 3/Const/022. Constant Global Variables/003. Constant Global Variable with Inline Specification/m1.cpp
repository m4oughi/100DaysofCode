#include <iostream>

inline const int GLOBAL_CONSTANT = 300; // Inline global constant

void displayGlobalConstant();

int main() {
    displayGlobalConstant(); // Calls function to display constant
}
