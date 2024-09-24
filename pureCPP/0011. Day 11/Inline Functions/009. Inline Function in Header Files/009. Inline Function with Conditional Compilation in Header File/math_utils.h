#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Inline function with conditional compilation
inline int max(int a, int b) {
#ifdef USE_MAX
    return (a > b) ? a : b;
#else
    return a + b;
#endif
}

#endif // MATH_UTILS_H
