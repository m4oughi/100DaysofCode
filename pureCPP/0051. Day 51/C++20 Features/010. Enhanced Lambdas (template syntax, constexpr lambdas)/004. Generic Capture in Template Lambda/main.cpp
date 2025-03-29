#include <iostream>

int main() {
    int factor = 10;
    auto multiply = [factor]<typename T>(T value) { return value * factor; };

    std::cout << "5 * 10 = " << multiply(5) << "\n";
}
