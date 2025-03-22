#include <iostream>

int main() {
    [[maybe_unused]] int unusedVar = 10; // No warning for unused variable
    return 0;
}
