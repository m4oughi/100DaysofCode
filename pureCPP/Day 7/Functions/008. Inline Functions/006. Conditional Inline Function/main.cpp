#include <iostream>

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Max of 3 and 7: " << max(3, 7) << std::endl;
    return 0;
}
