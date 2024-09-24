#include <iostream>

int main() {
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    std::cout << "Sum of 8 and 12: " << add(8, 12) << std::endl;
    return 0;
}
