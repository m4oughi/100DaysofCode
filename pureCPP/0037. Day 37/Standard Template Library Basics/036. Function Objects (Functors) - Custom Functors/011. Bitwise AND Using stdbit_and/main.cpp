#include <iostream>
#include <functional>

int main() {
    std::bit_and<int> bitwiseAnd;

    int a = 6; // 110 in binary
    int b = 3; // 011 in binary

    std::cout << "Bitwise AND of 6 and 3: " << bitwiseAnd(a, b) << "\n";

    return 0;
}
