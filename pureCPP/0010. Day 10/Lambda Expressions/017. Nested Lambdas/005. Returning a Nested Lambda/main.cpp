#include <iostream>
#include <functional>

auto getAdder(int x) {
    return [x](int y) {
        return [x, y](int z) {
            return x + y + z;
        };
    };
}

int main() {
    auto add = getAdder(5)(10);
    std::cout << "Sum = " << add(20) << std::endl; // Outputs: Sum = 35 (5 + 10 + 20)

    return 0;
}
