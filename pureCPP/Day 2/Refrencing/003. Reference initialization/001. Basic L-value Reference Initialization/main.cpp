#include <iostream>

int main() {
    int x = 10;
    int &ref = x;  // ref is a reference to x
    ref = 20;      // Changes x to 20

    return 0;
}