#include <iostream>

struct Constants {
    static inline constexpr double PI = 3.141592653589793;
};

int main() {
    std::cout << "Pi: " << Constants::PI << '\n';
    return 0;
}
