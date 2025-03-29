#include <iostream>

constexpr int computeValue() {
    return 50;
}

constinit int globalConfig = computeValue(); // Must be initialized at compile-time

int main() {
    std::cout << "Global Config: " << globalConfig << "\n";
}
