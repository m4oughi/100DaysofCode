#include <iostream>
#include "functions.h"

// Function definition with `inline` and `extern` linkage
inline void printValue(int value) {
    std::cout << "Value: " << value << std::endl;
}
