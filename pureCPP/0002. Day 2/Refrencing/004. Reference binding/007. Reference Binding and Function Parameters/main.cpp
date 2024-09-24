#include <iostream>

void modify(int &ref) {
    ref = 40;  // Modifies the original value
}

int main() {
    int x = 30;
    modify(x);  // x is passed by reference and modified
    std::cout << x << std::endl;  // Output: 40

    return 0;
}