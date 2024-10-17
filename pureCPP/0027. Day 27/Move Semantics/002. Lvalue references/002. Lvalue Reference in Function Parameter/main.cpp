#include <iostream>

void increment(int &ref) {
    ref++;  // Increments the original Lvalue
}

int main() {
    int x = 5;
    increment(x);  // Passes Lvalue to the function
    std::cout << x;  // Prints 6

    return 0;
}
