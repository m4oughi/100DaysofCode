#include <stdio.h>

// This will not work:
// #undef __LINE__  // __LINE__ is a predefined macro and cannot be undefined

int main() {
    printf("This code is on line: %d\n", __LINE__);
    return 0;
}
