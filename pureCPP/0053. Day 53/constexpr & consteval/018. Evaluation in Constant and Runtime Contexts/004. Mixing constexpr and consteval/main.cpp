#include <iostream>

consteval int triple(int x) {
    return x * 3;
}

constexpr int computeTriple(int x) {
    return triple(x);  // Only works if x is known at compile-time
}

int main() {
    constexpr int result = computeTriple(4);  // OK
    std::cout << "Triple: " << result << '\n';

    int n;
    std::cin >> n;
    // int runtimeResult = computeTriple(n);  // ❌ Compilation error!
}
