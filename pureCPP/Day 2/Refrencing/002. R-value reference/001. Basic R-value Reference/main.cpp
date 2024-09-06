#include <iostream>

int main() {
    int &&ref = 10;  // ref is an R-value reference to the temporary value 10
    ref = 20;        // Modifies the temporary value

    return 0;
}