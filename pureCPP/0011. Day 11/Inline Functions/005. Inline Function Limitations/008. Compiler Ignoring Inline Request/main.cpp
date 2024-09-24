#include <iostream>

// Large function with inline keyword (likely to be ignored)
inline int largeComputation(int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result += i * j;
        }
    }
    return result;
}

int main() {
    std::cout << "Large Computation Result: " << largeComputation(1000) << std::endl;
    return 0;
}
