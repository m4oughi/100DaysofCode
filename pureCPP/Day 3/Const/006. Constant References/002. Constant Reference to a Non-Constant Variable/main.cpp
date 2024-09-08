#include <iostream>

int main() {
    int y = 30;
    const int &ref = y; // ref is a constant reference to y
    // ref = 40; // NOT allowed: modifying the value of y through ref is not allowed
    y = 50; // Allowed: modifying y directly


    return 0;
}