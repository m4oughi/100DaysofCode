#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;

// Static inline function with internal linkage
static inline void internalPrint() {
    std::cout << "This is an inline function with internal linkage." << std::endl;
}

#endif // FUNCTIONS_H
