#include "math_utils.h"

// Inline function definition
inline int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}
