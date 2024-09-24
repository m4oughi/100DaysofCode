#include <iostream>

void printValue(const int& x) {
    std::cout << "Value: " << x << std::endl;
    // x cannot be modified inside this function
}

int main() {
    int num = 42;
    printValue(num);  // Pass by reference to const
    return 0;
}
