#include <iostream>

constexpr int setBit(int num, int pos) {
    return num | (1 << pos);
}

int main() {
    constexpr int num = 5;  // 0101 in binary
    constexpr int newNum = setBit(num, 1); // Set the second bit: 0111
    
    std::cout << "Modified number: " << newNum << '\n';
    return 0;
}
