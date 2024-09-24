#include <iostream>

int main() {
    int &&ref = 10;  // ref refers to temporary object
    int *ptr = &ref;  // Points to the same memory

    // After this point, ref is a dangling reference

    return 0;
}