#include <iostream>

void printValue([[maybe_unused]] int value) {
    // Function does nothing, avoids unused parameter warning
}

int main() {
    printValue(42);
    return 0;
}
