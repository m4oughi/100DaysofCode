#include <iostream>

// Large inline function, not ideal for inlining
inline int largeFunction(int x, int y) {
    int sum = 0;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            sum += i * j;
        }
    }
    return sum;
}

int main() {
    std::cout << "Result: " << largeFunction(100, 100) << std::endl; // Output: 24502500
    return 0;
}
