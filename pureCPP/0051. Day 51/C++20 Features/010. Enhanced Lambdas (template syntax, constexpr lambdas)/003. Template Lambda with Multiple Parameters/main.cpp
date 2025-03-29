#include <iostream>

int main() {
    auto concat = []<typename T1, typename T2>(T1 a, T2 b) {
        return a + b;
    };

    std::cout << "String + Char: " << concat(std::string("Hello"), '!') << "\n";
    std::cout << "Int + Double: " << concat(5, 2.5) << "\n";
}
