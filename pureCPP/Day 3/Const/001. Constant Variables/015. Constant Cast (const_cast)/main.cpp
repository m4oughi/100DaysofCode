#include <iostream>

int main() {
    const int h = 110;
    int *i = const_cast<int*>(&h); // i points to h, but modifying h via i is undefined behavior

    return 0;
}