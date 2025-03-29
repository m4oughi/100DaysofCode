#include <iostream>

int main() {
    auto add = [](auto a, auto b) { return a + b; };

    std::cout << "Int: " << add(2, 3) << "\n";
    std::cout << "Double: " << add(2.5, 3.5) << "\n";
}
