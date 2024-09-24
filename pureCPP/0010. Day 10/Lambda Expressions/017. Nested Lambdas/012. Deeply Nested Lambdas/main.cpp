#include <iostream>

int main() {
    auto level1 = [](int a) {
        return [a](int b) {
            return [a, b](int c) {
                return [a, b, c](int d) {
                    return a + b + c + d;
                };
            };
        };
    };

    auto level2 = level1(1);
    auto level3 = level2(2);
    auto level4 = level3(3);
    std::cout << "Sum = " << level4(4) << std::endl; // Outputs: Sum = 10 (1 + 2 + 3 + 4)

    return 0;
}
