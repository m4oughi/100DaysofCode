#include <iostream>

int main() {
    int a = 5, b = 10;
    auto printValues = [=]() { std::cout << "a: " << a << ", b: " << b << std::endl; };
    printValues();
    return 0;
}
