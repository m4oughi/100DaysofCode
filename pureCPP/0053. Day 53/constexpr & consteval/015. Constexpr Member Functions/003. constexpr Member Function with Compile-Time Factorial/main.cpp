#include <iostream>

class Factorial {
public:
    constexpr static int compute(int n) {
        return (n <= 1) ? 1 : n * compute(n - 1);
    }
};

int main() {
    constexpr int fact5 = Factorial::compute(5);  // ✅ Compile-time calculation
    std::cout << "5! = " << fact5 << '\n';
}
