#include "math_library.h"

// Non-inline definition of the same function (linker error)
int subtract(int a, int b) {
    return a - b;
}