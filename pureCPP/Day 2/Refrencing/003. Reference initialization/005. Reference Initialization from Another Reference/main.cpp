#include <iostream>

int main() {
    int x = 10;
    int &ref1 = x;    // ref1 binds to x
    int &ref2 = ref1; // ref2 binds to the same object as ref1 (x)
    ref2 = 30;        // Changes x to 30

    return 0;
}