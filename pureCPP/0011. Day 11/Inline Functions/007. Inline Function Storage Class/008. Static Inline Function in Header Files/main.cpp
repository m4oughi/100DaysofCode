#include <iostream>
#include "counter.h"

int main() {
    std::cout << "counter(): " << counter() << std::endl; // Output: 1
    std::cout << "counter(): " << counter() << std::endl; // Output: 2
    return 0;
}
