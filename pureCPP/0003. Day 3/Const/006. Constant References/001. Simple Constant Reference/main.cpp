#include <iostream>

int main() {
    const int x = 10;
    const int &ref = x; // ref is a constant reference to x
    // ref = 20; // NOT allowed: modifying the value of x through ref is not allowed


    return 0;
}