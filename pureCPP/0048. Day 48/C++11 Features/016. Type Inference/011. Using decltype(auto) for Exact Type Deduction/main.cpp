#include <iostream>

int getValue() { return 42; }
const int& getConstValue() { static int x = 100; return x; }

int main() {
    decltype(auto) a = getValue();       // a is int
    decltype(auto) b = getConstValue();  // b is const int&

    std::cout << "a: " << a << ", b: " << b << "\n";
    return 0;
}
