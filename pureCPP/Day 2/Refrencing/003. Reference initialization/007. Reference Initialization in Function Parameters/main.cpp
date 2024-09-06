#include <iostream>

void modify(int &x) {
    x = 20;  // L-value reference: modifies the original variable
}

void process(int &&x) {
    x = 50;  // R-value reference: modifies the temporary
}

int main() {
    int a = 10;
    modify(a);      // Modifies a
    process(100);   // Modifies the temporary 100

    return 0;
}