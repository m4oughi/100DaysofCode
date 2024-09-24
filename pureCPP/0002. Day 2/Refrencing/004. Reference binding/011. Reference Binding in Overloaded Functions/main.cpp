#include <iostream>

void process(int &x) {
    std::cout << "L-value reference" << std::endl;
}

void process(int &&x) {
    std::cout << "R-value reference" << std::endl;
}

int main() {
    int x = 30;
    process(x);     // Calls L-value version
    process(50);    // Calls R-value version

    return 0;
}