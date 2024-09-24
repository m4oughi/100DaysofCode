#include <iostream>

int main() {
    int a = 5, b = 10;
    auto modifyValues = [&]() { a += 2; b *= 2; };
    modifyValues();
    std::cout << "Modified a: " << a << ", b: " << b << std::endl;
    return 0;
}
