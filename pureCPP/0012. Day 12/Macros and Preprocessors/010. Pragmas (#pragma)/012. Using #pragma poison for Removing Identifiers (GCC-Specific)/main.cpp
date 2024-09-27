#include <stdio.h>

#pragma GCC poison scanf  // Prevent use of scanf

int main() {
    // scanf("%d", &x);  // This line will cause a compiler error
    printf("scanf is poisoned and cannot be used\n");
    return 0;
}
