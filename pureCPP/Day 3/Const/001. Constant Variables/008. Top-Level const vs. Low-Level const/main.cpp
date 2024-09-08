#include <iostream>

int main() {
    const int d = 60;      // Top-level const: d is constant
    const int *ptr = &d;   // Low-level const: data pointed by ptr is constant


    return 0;
}