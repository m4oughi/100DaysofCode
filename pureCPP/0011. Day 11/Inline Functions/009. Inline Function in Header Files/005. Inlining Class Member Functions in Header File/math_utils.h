#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Class with inline member functions
class Math {
public:
    inline int square(int x) {
        return x * x;
    }
    
    inline int cube(int x) {
        return x * x * x;
    }
};

#endif // MATH_UTILS_H
