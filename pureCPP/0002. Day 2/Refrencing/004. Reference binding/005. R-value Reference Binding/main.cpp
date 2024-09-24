#include <iostream>

int main() {
    int &&ref = 200;  // R-value reference binds to temporary 200
    ref = 300;        // Modifies the temporary value


    return 0;
}