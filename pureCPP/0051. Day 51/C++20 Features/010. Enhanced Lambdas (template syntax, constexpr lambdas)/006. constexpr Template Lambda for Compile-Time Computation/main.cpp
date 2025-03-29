#include <iostream>

constexpr auto power = []<typename T>(T base, int exp) {
    T result = 1;
    for (int i = 0; i < exp; ++i)
        result *= base;
    return result;
};

int main() {
    constexpr int res = power(2, 3);
    std::cout << "2^3 = " << res << "\n";
}
