#include <iostream>

// Invalid code: Return types cannot be the only differentiator
int getValue(int a) {
    return a;
}

/* This will cause a compile error because return types can't be the sole difference
double getValue(int a) {
    return static_cast<double>(a);
}
*/

int main() {
    std::cout << getValue(5) << std::endl;  // Would cause ambiguity
    return 0;
}
