#include <iostream>

// Inline recursive function with static variable to count calls
inline int countCalls(int n) {
    static int callCount = 0;
    ++callCount;
    if (n <= 1) {
        std::cout << "Total function calls: " << callCount << std::endl; // Print count on base case
        return 1;
    }
    return n * countCalls(n - 1); // Recursive call
}

int main() {
    std::cout << "Factorial of 4: " << countCalls(4) << std::endl; // Output: 24 and call count
    return 0;
}
