#include <iostream>
#include "utilities.h"

// Extern inline function definition
inline void printMessage() {
    std::cout << "Global inline function with external linkage." << std::endl;
}
