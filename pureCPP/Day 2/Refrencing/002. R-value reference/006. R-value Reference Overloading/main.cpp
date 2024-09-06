#include <iostream>

void process(int &x) {
    std::cout << "L-value reference" << std::endl;
}

void process(int &&x) {
    std::cout << "R-value reference" << std::endl;
}

int main() {
    int a = 10;
    process(a);      // Calls L-value version
    process(20);     // Calls R-value version

    return 0;
}