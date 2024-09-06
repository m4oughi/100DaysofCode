#include <iostream>

int main() {
    int &&ref = 100;  // ref is an R-value reference to the temporary value 100
    ref = 200;        // Modifies the temporary value

    return 0;
}