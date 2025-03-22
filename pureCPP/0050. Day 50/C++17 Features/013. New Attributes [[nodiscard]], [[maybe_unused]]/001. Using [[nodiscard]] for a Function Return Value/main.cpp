#include <iostream>

[[nodiscard]] int computeSum(int a, int b) {
    return a + b;
}

int main() {
    computeSum(3, 5); // Compiler may warn: return value is ignored
    return 0;
}
