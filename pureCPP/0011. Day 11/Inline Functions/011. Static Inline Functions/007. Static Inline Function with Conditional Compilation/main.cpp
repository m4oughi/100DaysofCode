#include <iostream>

#ifdef USE_ADD
static inline int operation(int a, int b) {
    return a + b;
}
#else
static inline int operation(int a, int b) {
    return a * b;
}
#endif

int main() {
    std::cout << "Operation Result: " << operation(4, 5) << std::endl; // Output depends on USE_ADD
    return 0;
}
