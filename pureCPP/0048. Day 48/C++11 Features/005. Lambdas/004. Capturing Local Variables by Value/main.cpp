#include <iostream>

int main() {
    int x = 10;

    auto printX = [x]() { std::cout << "Captured x: " << x << std::endl; };

    printX();

    return 0;
}
