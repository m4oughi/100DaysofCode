#include <iostream>

int main() {
    auto add = [](auto a, auto b) {
        return a + b;
    };

    std::cout << "Sum of integers: " << add(3, 5) << std::endl;
    std::cout << "Sum of doubles: " << add(3.5, 2.1) << std::endl;
    return 0;
}
