#include <iostream>

constexpr bool use_fast_mode = true;
constexpr int speed = use_fast_mode ? 100 : 50;

int main() {
    std::cout << "Speed: " << speed << '\n';
    return 0;
}
