#include <iostream>

auto getMultiplier(int factor) {
    return [factor](int x) { return x * factor; };
}

int main() {
    auto triple = getMultiplier(3);
    std::cout << "Triple of 5: " << triple(5) << std::endl;

    return 0;
}
