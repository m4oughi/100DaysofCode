#include <iostream>

namespace Utils {
    static inline int max(int a, int b) {
        return (a > b) ? a : b;
    }
}

int main() {
    std::cout << "Max of 10 and 20: " << Utils::max(10, 20) << std::endl; // Output: 20
    return 0;
}
