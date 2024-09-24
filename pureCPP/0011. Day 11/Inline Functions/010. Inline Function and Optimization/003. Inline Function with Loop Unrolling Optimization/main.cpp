#include <iostream>

// Inline function for multiplying a number by 2
inline int multiplyBy2(int x) {
    return x * 2;
}

int main() {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += multiplyBy2(i); // Loop unrolling optimization can be applied
    }
    std::cout << "Sum: " << sum << std::endl; // Output: 20
    return 0;
}
