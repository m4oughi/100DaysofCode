#include <iostream>

// Inline tail-recursive function for calculating sum
inline int sum(int n, int acc = 0) {
    if (n == 0) return acc; // Base case
    return sum(n - 1, acc + n); // Tail recursive call
}

int main() {
    std::cout << "Sum of first 5 numbers: " << sum(5) << std::endl; // Output: 15
    return 0;
}
