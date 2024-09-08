#include <iostream>

int main() {
    const int y = 20;
    const int *const p = &y; // p and the data pointed by p are both constant

    return 0;
}