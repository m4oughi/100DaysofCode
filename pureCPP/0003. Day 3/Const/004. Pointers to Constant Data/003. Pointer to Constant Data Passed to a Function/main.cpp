#include <iostream>

void printValue(const int *ptr) {
    std::cout << *ptr << std::endl;
    // *ptr = 70; // NOT allowed: modifying the value pointed by ptr is not allowed
}

int main() {
    int a = 80;
    printValue(&a);

    return 0;
}