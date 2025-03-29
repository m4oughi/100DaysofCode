#include <iostream>
#include <functional>

int main() {
    auto divide = []<typename T>(T a, T b) { return a / b; };

    std::cout << "10 / 2 = " << std::invoke(divide, 10, 2) << "\n";
}
