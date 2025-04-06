#include <iostream>

class Math {
public:
    constexpr static int power(int base, int exp) {
        if constexpr (exp == 0) return 1;
        else return base * power(base, exp - 1);
    }
};

int main() {
    constexpr int result = Math::power(2, 5);  // ✅ Evaluated at compile-time
    std::cout << "2^5 = " << result << '\n';
}
