#ifndef MATH_UTILS_H
#define MATH_UTILS_H

namespace MathUtils {
    // Inline function in a namespace
    inline int divide(int a, int b) {
        return (b != 0) ? (a / b) : 0; // Avoid division by zero
    }
}

#endif // MATH_UTILS_H
