#ifndef MATH_UTILS_H
#define MATH_UTILS_H

class Math {
public:
    // Public function that calls a private inline function
    int squarePlusOne(int x);

private:
    // Private inline function in header file
    inline int square(int x) {
        return x * x;
    }
};

inline int Math::squarePlusOne(int x) {
    return square(x) + 1;
}

#endif // MATH_UTILS_H
