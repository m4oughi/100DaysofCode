#include <iostream>

int main() {
    int x = 10;
    int &lref = x;
    int &&rref = 20;

    // Example collapsing rules
    int &collapsed1 = lref;  // L-value reference remains L-value reference
    int &collapsed2 = rref;  // R-value reference collapses to L-value reference

    return 0;
}