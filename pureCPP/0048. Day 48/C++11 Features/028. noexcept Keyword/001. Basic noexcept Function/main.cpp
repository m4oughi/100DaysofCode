#include <iostream>

void simpleFunction() noexcept {
    std::cout << "This function guarantees no exceptions." << std::endl;
}

int main() {
    simpleFunction();
    return 0;
}
