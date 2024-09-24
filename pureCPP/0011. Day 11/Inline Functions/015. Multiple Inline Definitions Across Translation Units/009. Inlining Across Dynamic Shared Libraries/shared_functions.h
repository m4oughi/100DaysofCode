#ifndef SHARED_FUNCTIONS_H
#define SHARED_FUNCTIONS_H

#include <iostream>
using namespace std;

// Inline function in shared library header
inline void sharedFunction() {
    std::cout << "Inline function from a shared library!" << std::endl;
}

#endif // SHARED_FUNCTIONS_H
