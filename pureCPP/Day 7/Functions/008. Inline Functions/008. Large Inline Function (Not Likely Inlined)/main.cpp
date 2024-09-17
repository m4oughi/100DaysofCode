#include <iostream>

inline int largeCalculation(int x) {
    int sum = 0;
    for (int i = 1; i <= x; ++i) {
        sum += i * i;
    }
    return sum;
}

int main() {
    std::cout << "Sum of squares up to 10: " << largeCalculation(10) << std::endl;
    return 0;
}
