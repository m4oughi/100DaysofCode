#include <iostream>

consteval int power(int base, int exp) {
    return (exp == 0) ? 1 : base * power(base, exp - 1);
}

int main() {
    static_assert(power(2, 3) == 8, "Incorrect calculation!");
    std::cout << "2^3 computed correctly at compile-time!\n";
    return 0;
}
