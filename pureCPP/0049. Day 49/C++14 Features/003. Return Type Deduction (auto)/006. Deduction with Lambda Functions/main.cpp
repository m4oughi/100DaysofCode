#include <iostream>

auto addLambda = [](int a, int b) {
    return a + b; // Deduces int
};

int main() {
    std::cout << "Lambda Sum: " << addLambda(4, 6) << std::endl;
    return 0;
}
